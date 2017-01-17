/* ================================================================================================================
 * Name: merge_sort.h
 * Description: Header file for Merge Sort implementation in C
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/merge-sort-program-c
 *
 * ================================================================================================================
 */


#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_

#define rand_arr_size 100

void merge_sort(int arr[], int temp[], int array_size);
void m_sort(int arr[], int temp[], int left, int right);
void merge(int arr[], int temp[], int left, int mid, int right);
void print_array(int *arr, int n);
int compare_array(int *arr1, int *arr2, int n);
void merge_sort_test(void);
int mergesort_test_rand(void);

#endif /* MERGE_SORT_H_ */
