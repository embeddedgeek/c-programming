/* ================================================================================================================
 * Name: merge_sort_test.c
 * Description: A simple test function for Merge sort
 * Input(s):
 *   arr[] : integer array
 * Output(s):
 *   Display sorted array
 *   Check if test is passed or failed
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-merge-sort
 *
 * ================================================================================================================
 */


#include<stdio.h>
#include"merge_sort.h"

void merge_sort_test(void) {

	int flag;
	printf("Test function for merge sort\n");

	  int arr[6] = {5,3,6,9,4,2};
	  int array_size= sizeof(arr)/sizeof(arr[0]);

	  printf("Given array: \n");
	  print_array(&arr[0],array_size);

	//Array arr[] has the items to sort; temporary array temp[] is a work array.
	  int temp[array_size];
	  for(int i = 0; i < array_size; i++)
	  	        temp[i] = arr[i];

	/*function call for merge sort test*/
	  merge_sort(arr, temp, array_size);

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



