/* ================================================================================================================
 * Name: compare-array.c
 * Description: A simple function to compare two arrays of size n
 * Input(s):
 *   *arr1 : integer pointer to array
 *   *arr2 : integer pointer to array
 *   n : integer number (size of array)
 * Output(s):
 *   Returns true(flag=1)/false(flag=0)
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-insertion-sort
 *
 * ================================================================================================================
 */


#include<stdio.h>
#include"insertion-sort.h"

// A simple function to compare two arrays of same size n
int compare_array(int *arr1, int *arr2, int n)
{
   int i,flag = 0;
   for (i=0;i<n;i++){

  	 	if(arr1[i] == arr2[i])
  	 	flag=1;
  	 }
   return flag;
}









