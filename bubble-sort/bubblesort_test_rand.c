 /* ================================================================================================================
 * Name: bubblesort_test_rand.c
 * Description: A simple function to sort an array of large size using Bubble sort
 * Input(s):
 *   arr[] : integer array (random elements)
 * Output(s):
 *   Display sorted array (in increasing order)
 * License: MIT
 * Reference: http://embeddedgeeks.com/programming/bubble-sort-c
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"bubble_sort.h"
#include<stdlib.h>


void bubblesort_test_rand(void){

	 // Enter any array for sorting
	  int i, test_input_arr[rand_arr_size];
	  printf("Enter array for sorting\n");
	  for(i=0;i<rand_arr_size;i++){
	          		test_input_arr[i] = rand();
	          	}

	 // Display array before sorting
	  printf("Given array: \n");
	  print_array(test_input_arr,rand_arr_size);

	 //Array test_input_arr[] has the items to sort; temporary array temp[] is a work array.
	  	  int temp[rand_arr_size];
	  	  for(int i = 0; i < rand_arr_size; i++)
	  	  	        temp[i] = test_input_arr[i];

    // function call for quick sort
	  	  bubble_sort(test_input_arr, rand_arr_size);

    // Print array after sorting
	  printf("Sorted array: \n");
	  print_array(test_input_arr,rand_arr_size);
}










