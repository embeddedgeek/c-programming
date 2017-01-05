 /* ================================================================================================================
 * Name: binary_search_recursive.c
 * Description: A simple function to implement Binary search in C
 * Input(s):
 *   *arr : integer pointer to  array
 *   start_index : integer number
 *   end_index : integer number
 *   search_num : integer number (target value)
 * Output(s):
 *   mid_index : integer number (returns if target value is found)
 *   If target value is not found returns -1
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/binary-search-c-programming-using-recursion
 *
 * ================================================================================================================
 */

#include"binary_search.h"


/* Binary search function using recursion which returns
   location of target value search_num in given array
   arr[] if present, otherwise returns -1,
   start_index =0, end_index = (array.length - 1)*/

int binary_search_recursive(int *arr, int search_num, int start_index, int end_index)
{
	if (start_index > end_index) {
	 return -1; // Target is not found
	}

	int mid_index = start_index + (end_index - start_index)/2;

	// If the target value is smaller than middle element, then consider only left subarray
	if (search_num < arr[mid_index]){
	    return binary_search_recursive(&arr[0],search_num, start_index, mid_index-1);
	 }

	// If the target value is greater than middle element, then consider only right subarray
	if (search_num > arr[mid_index]){
	    return binary_search_recursive(&arr[0], search_num, mid_index+1, end_index);
	 }
	// Else target value is found at the middle location
	 return mid_index;
}



