/*
 * selectionsort_rand_test.c
 *
 *  Created on: Jan 18, 2017
 *      Author: santanusarma
 */


#include<stdio.h>
#include"selection_sort.h"
#include<stdlib.h>


int quicksort_test_rand(void){

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

    // function call for Selection sort
	  	quick_sort(test_input_arr, 0, rand_arr_size-1);

    // Print array after sorting
	  printf("Sorted array: \n");
	  print_array(test_input_arr,rand_arr_size);
	  return 0;
}


