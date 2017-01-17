/*
 * quick_sort_test.c
 *
 *  Created on: Jan 17, 2017
 *      Author: santanusarma
 */

#include<stdio.h>
#include"quick_sort.h"

void quick_sort_test(void) {

	int flag;
	printf("Test function for quick sort\n");

	  int arr[6] = {5,3,6,9,4,2};
	  int array_size= sizeof(arr)/sizeof(arr[0]);

	  printf("Given array: \n");
	  print_array(&arr[0],array_size);

	//Array arr[] has the items to sort; temporary array temp[] is a work array.
	  int temp[array_size];
	  for(int i = 0; i < array_size; i++)
	  	        temp[i] = arr[i];

	/*function call for merge sort test*/
	  quick_sort(arr, 0, array_size-1);

	  // Verifying and validating result
	  // Expected sorted array (2, 3, 4, 5, 6, 9)
	  int sorted_arr[6] = {2, 3, 4, 5, 6, 9};

	  printf("\nAfter sorting computed result: \n");
	  print_array(&arr[0],array_size);

	  printf("\nExpected result: \n");
	  print_array(&sorted_arr[0],array_size);

     // Compare computed and expected result
	  flag = compare_array(&arr[0], &sorted_arr[0], array_size);

	 if(flag == 1){
	 	printf("\nTest Passed\n");
	 	}
	 else{
	 	printf("\nTest Failed\n");
	 	}

}



