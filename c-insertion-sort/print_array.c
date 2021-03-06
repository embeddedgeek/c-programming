/* ================================================================================================================
 * Name: print_array.c
 * Description: A simple function to print an array of size n
 * Input(s):
 *   *arr : integer pointer to array
 *   n : integer number (array size)
 * Output(s):
 *   Display array
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-insertion-sort
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"insertion_sort.h"

// A simple function to print an array of size n
void print_array(int *arr, int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}



