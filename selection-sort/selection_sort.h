/*
 * selection_sort.h
 *
 *  Created on: Jan 18, 2017
 *      Author: santanusarma
 */

#ifndef SELECTION_SORT_H_
#define SELECTION_SORT_H_

#define rand_arr_size 100

void selection_sort(int arr[], int left, int right);
void selection_sort_test(void);
int selectionsort_test_rand(void);
void print_array(int *arr, int n);
int compare_array(int *arr1, int *arr2, int n);
void swap(int arr[], int left, int right);


#endif /* SELECTION_SORT_H_ */
