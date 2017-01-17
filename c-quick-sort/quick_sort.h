/*
 * quick_sort.h
 *
 *  Created on: Jan 17, 2017
 *      Author: santanusarma
 */

#ifndef QUICK_SORT_H_
#define QUICK_SORT_H_

#define rand_arr_size 100

void quick_sort(int arr[], int left, int right);
int partition(int arr[], int left, int right);
void print_array(int *arr, int n);
int compare_array(int *arr1, int *arr2, int n);
void quick_sort_test(void);
int quicksort_test_rand(void);
void swap(int arr[], int left, int right);


#endif /* QUICK_SORT_H_ */
