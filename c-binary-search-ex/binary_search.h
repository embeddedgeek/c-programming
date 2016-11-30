/* ===========================================================================================
 * binary_search.h
 * Description: Header file for Binary search example program
 * License: MIT
 * Reference: http://embeddedgeeks.com/programming/binary-search-c-programming
 *
 * ===========================================================================================
 */

#ifndef BINARY_SEARCH_H_
#define BINARY_SEARCH_H_

int binary_search_iterative(int *arr, int search_num, int start_index, int end_index);
int binary_search_recursive(int *arr, int search_num, int start_index, int end_index);
void binary_search_iterative_test(void);
void binary_search_recursive_test(void);
void print_array(int *arr, int n);

#endif /* BINARY_SEARCH_H_ */
