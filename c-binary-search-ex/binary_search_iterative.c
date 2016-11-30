 /* ================================================================================================================
 * Name: binary_search_iterative.c
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
 * Reference: http://embeddedgeeks.com/programming/binary-search-c-programming
 *
 * ================================================================================================================
 */

#include"binary_search.h"


/* Binary search function which returns location of target value search_num in
   given array arr[] if present, otherwise returns -1,
   start_index =0, end_index = (array.length - 1)*/

int binary_search_iterative(int *arr, int search_num, int start_index, int end_index)
{
  while (start_index <= end_index)
  {
    int mid_index = start_index + (end_index-start_index)/2;

    // Check if search_num is present at middle position
    if (arr[mid_index] == search_num)
        return mid_index;

    // If search_num is greater, consider right half of array
    if (arr[mid_index] < search_num)
    	start_index = mid_index + 1;

    // If search_num is smaller, consider left half of array
    else
    	end_index = mid_index - 1;
  }

  // if target value search_num is not found returns -1
  return -1;
}

