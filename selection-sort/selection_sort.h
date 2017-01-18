/* ================================================================================================================
 * Name: selection_sort.h
 * Description: Header file for Quick Sort implementation in C
 * License: MIT
 * Reference: http://embeddedgeeks.com/programming/selection-sort-program-c
 *
 * ================================================================================================================
 */

#ifndef SELECTION_SORT_H_
#define SELECTION_SORT_H_

#define rand_arr_size 10

void selection_sort(int arr[], int n);
void selection_sort_test(void);
void selectionsort_test_rand(void);
void print_array(int *arr, int n);
int compare_array(int *arr1, int *arr2, int n);


#endif /* SELECTION_SORT_H_ */
