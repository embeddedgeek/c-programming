 /* ================================================================================================================
 * Name: insertion_sort_test_rand.c
 * Description: A simple function to sort an array of large size using Insertion sort
 * Input(s):
 *   arr : integer array  (random elements)
 * Output(s):
 *   Display array 'arr' after sorting
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-insertion-sort
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"insertion_sort.h"
#include<stdlib.h>


int insertion_sort_test_rand(void){

	  // Enter any array for sorting

	  int i, test_input_arr[rand_arr_size];
	  printf("Enter large array for sorting\n");
	  for(i=0;i<rand_arr_size;i++){
	          		test_input_arr[i] = rand();
	          	}

	 // Display array before sorting

	  printf("Given array: \n");
	/* Passing array 'test_input_arr' (by reference) and size of array 'rand_arr_size' (by value)
	 function print_array() arguments.*/
	  print_array(test_input_arr,rand_arr_size);

    // function call for insertion sort
	/* Passing array 'test_input_arr' (by reference) and size of array 'rand_arr_size' (by value)
	function insertion_sort() arguments.*/

	  insertion_sort(test_input_arr,rand_arr_size);

    // Print array after sorting

	  printf("Array after sorting: \n");
	  print_array(test_input_arr,rand_arr_size);
	  return 0;

}
