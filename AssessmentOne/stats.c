/**
 * @file stats.c
 * @author Muhammad Ibrahim (muhammadibrahim.muhammad@studenti.polito.it)
 * @brief This file contains the program to calculate statistics of data set
 * @version 1.0
 * @date 2021-03-03
 * 
 * @copyright Copyright @University of Colorado(c) 2021
 */

#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "stats.h"

/**
 * @brief This function swap 2 numbers 
 * 
 * the numbers are passed by its referance to the function
 * 
 * @param number_one pointer to number one address
 * @param number_two pointer to number two address
 */
void swap_2_numbers(uint8_t *number_one, uint8_t *number_two);

/* Size of the Data Set */
#define SIZE (40)

    /**
 * @brief The entry point to the program 
 */
    void main(void) {
  
  unsigned char test_data_set[SIZE] = 
                            { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

      /* Other Variable Declarations Go Here */
      /* Statistics and Printing Functions Go Here */
      /* Pinting orignal data set */
  array_print(test_data_set, SIZE);
  statistics_print(test_data_set, SIZE);
}

/*
* statistics_print Funtion definition
*/
void statistics_print(uint8_t *pointer_to_data_vector /* pointer holds data vecot address */,
                      uint8_t data_vector_size /* the number of element within data set */) {
  
  /* Definition ot mean, median, minimum, maximum variables*/
  uint8_t mean_value, median_value, minimum_value, maximum_value = 0;
  /* Sorting orignal data set and printing it */
  array_sort(pointer_to_data_vector, SIZE);
  array_print(pointer_to_data_vector, SIZE);
  /* Calculating the statistics by calling its corrsponding function */
  mean_value = mean_find(pointer_to_data_vector, data_vector_size);
  median_value = median_find(pointer_to_data_vector, data_vector_size);
  maximum_value = maximum_find(pointer_to_data_vector, data_vector_size);
  minimum_value = minimum_find(pointer_to_data_vector, data_vector_size);
  /* Printing the statistics */
  printf("The mean value is : %d\n", mean_value);
  printf("The median value is : %d\n", median_value);
  printf("The maximum value is : %d\n", maximum_value);
  printf("The minimum value is : %d\n", minimum_value);
}

/*
* array_print Funtion definition
*/
void array_print(uint8_t *pointer_to_data_vector /* pointer holds data vector address */,
                 uint8_t data_vector_size /* the number of element within data set */) {

  /* Printing statement */
  printf("data set: \n");
  /* For loop for printing each element individually */
  for (uint8_t index = 1; index <= data_vector_size; index++)
  {
    printf("%d\t", pointer_to_data_vector[index - 1]);
    if (index % 5 == 0)
    {
      printf("\n");
    }
  }
  printf("\n");
}

/*
* array_sort Funtion definition
*/
void array_sort(uint8_t *pointer_to_data_vector /* pointer holds data vector address */,
                uint8_t data_vector_size /* the number of element within data set */) {
  /* maximum_value_index variable that holds the index for current index for maximum value */
  uint8_t maximum_value_index = 0;

  /*
  * Selection sort implementation 
  * for each element check if any other elements is bigger,
  * if yes swap them.
  */

  /* Outer loop on each element using index_i */
  
  for (uint8_t index_i = 0; index_i < data_vector_size; index_i++) { 
    /* maximum value is the value of current element */
    maximum_value_index = index_i;
    /* iner loop to chech other elment of bigger than current by using index_j */
    for (uint8_t index_j = index_i + 1; index_j < data_vector_size; index_j++){
      /* checking if elemnt of index_j is greater than the current maximum elemet */
      if ( pointer_to_data_vector[index_j] > pointer_to_data_vector[maximum_value_index] ) {
        /* if greater, sets maximum_value_index to the current element */
        maximum_value_index = index_j; 
      }
    }

    /*
    * After searching all other elements, If there is a greater, swap them.
    * checks if current index_i not equal curren maximum_value_index 
    */
    if (index_i != maximum_value_index){ 
      swap_2_numbers(&pointer_to_data_vector[maximum_value_index], &pointer_to_data_vector[index_i]);
    }
  }
}

/*
* mean_find Funtion definition
*/
uint8_t mean_find(uint8_t *pointer_to_data_vector /* pointer holds data vector address */,
                  uint8_t data_vector_size /* the number of element within data set */) {
    /* Decleration of variable mean value */
    float mean_value = 0.0;
    /* loop to add all elements of data set */
    for (uint8_t index = 0; index < data_vector_size; index++) {
      /* adding the current element to mean_valu after cating it float */ 
      mean_value += (float)pointer_to_data_vector[index]; 
    }
    /* dividing the summation by the sizr of data set */
    mean_value /= (float)data_vector_size;
    /* return the mean value floored to the lowest integer */
    return (uint8_t)floor(mean_value);
}

/*
* median_find Funtion definition
*/
uint8_t median_find(uint8_t *pointer_to_data_vector /* pointer holds data vector address */,
                    uint8_t data_vector_size /* the number of element within data set */) {
  /* Decleration of variable median value */
  float median_value = 0;
  if (data_vector_size % 2 == 0) { /* if size is even */
    /* summing the 2 median values */
    median_value = (float)(pointer_to_data_vector[data_vector_size / 2] +
                           pointer_to_data_vector[(data_vector_size / 2) + 1]);
    /* calulate the average of the 2 values */
    median_value /= 2.0;
  } else { /* else size is odd */
    median_value = (float)pointer_to_data_vector[data_vector_size/2];
  }
  /* return the median value floored to the lowest integer */
  return (u_int8_t)floor(median_value);
}

/*
* maximum_find Funtion definition
*/
uint8_t maximum_find(uint8_t *pointer_to_data_vector /* pointer holds data vector address */,
                     uint8_t data_vector_size /* the number of element within data set */) {
  return pointer_to_data_vector[0];
}

/*
* minimum_find Funtion definition
*/
uint8_t minimum_find(uint8_t *pointer_to_data_vector /* pointer holds data vector address */,
                     uint8_t data_vector_size /* the number of element within data set */) {
  return pointer_to_data_vector[data_vector_size-1];
}

/* 
* swap_2_numbers Function
*/
void swap_2_numbers(uint8_t *number_one /* pinter holds referance to number one */,
                    uint8_t *number_two /* pinter holds referance to number one */) {
  *number_one = *number_one ^ *number_two; /* number one = number one xor numer two */
  *number_two = *number_one ^ *number_two; /* number two = number one xor numer two */
  *number_one = *number_one ^ *number_two; /* number two = number one xor numer two */
}