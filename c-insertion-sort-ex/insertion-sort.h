/*
 * insertion-sort.h
 *
 *  Created on: Nov 27, 2016
 *      Author: santanusarma
 */

#ifndef INSERTION_SORT_H_
#define INSERTION_SORT_H_

#define array_size 10

void insertion_sort(int arr[], int n);
void print_array(int *arr, int n);
int compare_array(int *arr1, int *arr2, int n);
void insertion_sort_test(void);
int array_sorting(void);

#endif /* INSERTION_SORT_H_ */
