 /* ================================================================================================================
 * Name: linear_search.c
 * Description: A simple function to implement Linear search in C
 * Input(s):
 *   *arr : integer pointer to  array
 *   n : integer number (array size)
 *   search_num : integer number to be searched in the given array
 * Output(s):
 *   Returns index
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/linear-search-c-programming
 *
 * ================================================================================================================
 */

#include"linear_search.h"

// Linearly search search_num in arr[].  If search_num is present then return the index,
// otherwise return -1

int linear_search(int *arr, int n, int search_num)
{
    int i;
    for (i=0; i<n; i++)
    {
       if (arr[i] == search_num)
    	  return i;
    }
    return -1;
}



