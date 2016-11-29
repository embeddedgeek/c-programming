/* ================================================================================================================
 * Name: count_occurrence.c
 * Description: A simple function to count number of occurrences
 * Input(s):
 *   *arr : integer pointer to array
 *   n : integer number (array size)
 *   search_num : integer number to be searched in the given array
 * Output(s):
 *   Display occurrences
 *   Returns count
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/linear-search-c-programming
 *
 * ================================================================================================================
 */


#include"linear_search.h"
#include<stdio.h>


int count_occurrence(int *arr, int n, int search_num)
{
    int i,count=0;
    for (i=0; i<n; i++)
    {
       if (arr[i] == search_num){
          printf("%d is present at index %d.\n", search_num, i);
    	  count++;
        }

    }
    return count;
}



