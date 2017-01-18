 /* ================================================================================================================
 * Name:  bubble_sort_test.c
 * Description: A simple test function for Bubble sort
 * Input(s):
 *   arr[] : integer array (unsorted)
 * Output(s):
 *   Display sorted array
 *   Check if test is passed or failed
 * License: MIT
 * Reference: http://embeddedgeeks.com/programming/bubble-sort-c
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"bubble_sort.h"

void bubble_sort_test(void) {

	int flag;
	printf("Test function for Bubble sort\n");

	  int arr[6] = {5,3,6,9,4,2};
	  int array_size= sizeof(arr)/sizeof(arr[0]);

	  printf("Given array: \n");
	  print_array(&arr[0],array_size);

	/*function call for Bubble sort test*/
	  bubble_sort(arr, array_size);

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






