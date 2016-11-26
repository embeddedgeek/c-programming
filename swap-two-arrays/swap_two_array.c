/* =============================================================================================================
 * Name: swap_two_array.c
 * Description: A simple function swap_two_array() to swap two arrays using pointer
 * License: MIT
 * Copyright: EmbeddedGeeks
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-swapping-two-arrays
 * =============================================================================================================
 */
#include"swap_two_array.h"

void swap_two_array(int *arr1,int *arr2){

   int temp_arr;

	    temp_arr = *arr1;
		*arr1 = *arr2;
		*arr2 = temp_arr;
}




