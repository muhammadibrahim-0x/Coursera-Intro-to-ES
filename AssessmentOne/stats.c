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
#include "stats.h"

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

}

/*
* statistics_print Funtion definition
*/
void statistics_print(uint8_t *pointer_to_data_vector /* pointer holds data vecot address */,
                      uint8_t data_vector_size /* the number of element within data set */) {
}

/*
* array_print Funtion definition
*/
void array_print(uint8_t *pointer_to_data_vector /* pointer holds data vecot address */,
                 uint8_t data_vector_size /* the number of element within data set */){
}

/*
* array_sort Funtion definition
*/
void array_sort(uint8_t *pointer_to_data_vector /* pointer holds data vecot address */,
                uint8_t data_vector_size /* the number of element within data set */){
}

/*
* mean_find Funtion definition
*/
uint8_t mean_find(uint8_t *pointer_to_data_vector /* pointer holds data vecot address */,
                  uint8_t data_vector_size /* the number of element within data set */) {
}

/*
* median_find Funtion definition
*/
uint8_t median_find(uint8_t *pointer_to_data_vector /* pointer holds data vecot address */,
                    uint8_t data_vector_size /* the number of element within data set */){
}

/*
* maximum_find Funtion definition
*/
uint8_t maximum_find(uint8_t *pointer_to_data_vector /* pointer holds data vecot address */,
                     uint8_t data_vector_size /* the number of element within data set */) {
}

/*
* minimum_find Funtion definition
*/
uint8_t minimum_find(uint8_t *pointer_to_data_vector /* pointer holds data vecot address */,
                     uint8_t data_vector_size /* the number of element within data set */) {
}