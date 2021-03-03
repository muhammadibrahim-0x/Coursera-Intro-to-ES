/**
 * @file stats.h
 * @author Muhammad Ibrahim (muhammadibrahim.muhammad@studenti.polito.it)
 * @brief This file contains the functions declearations
 * @version 1.0
 * @date 2021-03-03
 * 
 * @copyright Copyright @University of Colorado(c) 2021
 * 
 */

#ifndef __STATS_H__
#define __STATS_H__

/** 
 * @brief This fuction prints the statistics of a given data set.
 * 
 * The function first copeies the data set into its local
 * data set, prints the original data set, Then sorting it. 
 * After that calling other statistics function to calculate:
 *  Median, Mean, Maximum, Minimum 
 * and prints there vales
 * 
 * @param pointer_to_data_vector  pointer holds the adress of the data set
 * @param data_vector_size        number of data set elemets
 */
void statistics_print(uint8_t *pointer_to_data_vector, uint8_t data_vector_size);

/**
 * @brief This function prints the elements of an array.
 * 
 * @param pointer_to_data_vector  pointer holds the adress of the data set
 * @param data_vector_size        number of data set elemets
 */
void array_print(uint8_t *pointer_to_data_vector, uint8_t data_vector_size);

/**
 * @brief This function sorts a giver array in decreasing order.
 * 
 *  0th element is the largest, (N-1)th element is the smalest. 
 *  It uses Selection sort alogrithm.
 * @param pointer_to_data_vector  pointer holds the adress of the data set
 * @param data_vector_size        number of data set elemets 
 */
void array_sort(uint8_t *pointer_to_data_vector, uint8_t data_vector_size);

/**
 * @brief this function calculate the mean of data set elements.
 * 
 * mean = (sum of elements)/numer of elements
 * 
 * @param pointer_to_data_vector  pointer holds the adress of the data set
 * @param data_vector_size        number of data set elemets
 * @return uint8_t mean_value     mean value of data set 
 */
uint8_t mean_find(uint8_t *pointer_to_data_vector, uint8_t data_vector_size);

/**
 * @brief This function calculate the median of data set elements.
 * 
 * if  (size is even){
 *  median = data_set[size/2] 
 * } else if (size is odd) {
 *   median = (data_set[(size-1)/2] + data_set[(size_1)/2])/2
 * }
 * 
 * @param pointer_to_data_vector  pointer holds the adress of the data set
 * @param data_vector_size        number of data set elemets
 * @return uint8_t median_value   median value of data set 
 */
uint8_t median_find(uint8_t *pointer_to_data_vector, uint8_t data_vector_size);

/**
 * @brief This function finds the maximum of data set.
 *  
 * @param pointer_to_data_vector  pointer holds the adress of the data set
 * @param data_vector_size        number of data set elemets
 * @return uint8_t maximum_value  maximum valued element of data set 
 */
uint8_t maximum_find(uint8_t *pointer_to_data_vector, uint8_t data_vector_size);

/**
 * @brief This function finds the minimum of data set.
 *  
 * @param pointer_to_data_vector  pointer holds the adress of the data set
 * @param data_vector_size        number of data set elemets
 * @return uint8_t minimum_value  minimum valued element of data set 
 */
uint8_t minimum_find(uint8_t *pointer_to_data_vector, uint8_t data_vector_size);

#endif /* __STATS_H__ */
