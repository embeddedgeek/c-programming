 /* ================================================================================================================
 * Name:bubble_sort.h
 * Description: Header file for Bubble Sort implementation in C
 * License: MIT
 * Reference: http://embeddedgeeks.com/programming/bubble-sort-c
 *
 * ================================================================================================================
 */

#ifndef BUBBLE_SORT_H_
#define BUBBLE_SORT_H_

#define rand_arr_size 10

void bubble_sort(int arr[], int n);
void bubble_sort_test(void);
void bubblesort_test_rand(void);
void print_array(int *arr, int n);
int compare_array(int *arr1, int *arr2, int n);

#endif /* BUBBLE_SORT_H_ */
