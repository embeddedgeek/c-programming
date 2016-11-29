 /* ================================================================================================================
 * Name: linear_search.h
 * Description: Header file for Linear search example program
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/linear-search-c-programming
 *
 * ================================================================================================================
 */

#ifndef LINEAR_SEARCH_H_
#define LINEAR_SEARCH_H_

#define array_size 10

int linear_search(int *arr, int n, int search_num);
void linear_search_test(void);
int linear_search_large_array_test(void);
void print_array(int *arr, int n);
int count_occurrence(int *arr, int n, int search_num);

#endif /* LINEAR_SEARCH_H_ */
