/* ================================================================================================================
 * Name: merge_sort.c
 * Description: A simple function to implement Merge sort in C
 * Input(s):
 *   arr[] : integer array
 *   temp[]: integer array
 *   array_size : integer number (size of array)
 * Output(s):
 *   Returns none
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-merge-sort
 *
 * ================================================================================================================
 */

#include"merge_sort.h"

void merge_sort(int arr[], int temp[], int array_size){

	/*A simple function for sorting an array using merge sort*/
    m_sort(arr, temp, 0, array_size - 1);

}




