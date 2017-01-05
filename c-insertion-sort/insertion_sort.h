/* ================================================================================================================
 * Name: insertion_sort.h
 * Description: Header file for insertion sort example program
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-insertion-sort
 *
 * ================================================================================================================
 */

#ifndef INSERTION_SORT_H_
#define INSERTION_SORT_H_

#define array_size 10
#define rand_arr_size 100

void insertion_sort(int arr[], int n);
void print_array(int *arr, int n);
int compare_array(int *arr1, int *arr2, int n);
void insertion_sort_test(void);
int array_sorting(void);
int insertion_sort_test_rand(void);

#endif /* INSERTION_SORT_H_ */
