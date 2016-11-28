/* ================================================================================================================
 * Name: insertion_sort_test.c
 * Description: A simple test function for verification and validation of Insertion sort
 * Input(s):
 *   arr : integer array
 * Output(s):
 *   Check if test is passed or failed
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-insertion-sort
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"insertion_sort.h"


void insertion_sort_test(void) {

	int flag;
	printf("Test function for insertion sort\n");

	// Input: arr = (5, 3, 6, 9, 4, 2)
	// Output: arr = (2, 3, 4, 5, 6, 9)

	  int arr[6] = {5,3,6,9,4,2};
	             /* To determine the number of elements in the array,
	             we can divide the total size of the array
	             by the size of the array element.*/
	  int n= sizeof(arr)/sizeof(arr[0]);
	  printf("Given array: \n");
	  print_array(&arr[0],n);


	// function call for test insertion sort
    /* Passing array '&arr[0]'(by reference) and size of array 'n' (by value)
     * function insertion_sort() arguments.*/

	  insertion_sort(&arr[0],n);


	  // Verifying and validating result
	  // Expected sorted array (2, 3, 4, 5, 6, 9)
	  int sorted_arr[6] = {2, 3, 4, 5, 6, 9};
	  printf("\nAfter sorting computed result: \n");

	  /* Passing array '&arr[0]' (by reference) and size of array 'n' (by value)
	   function print_array() arguments.*/
	  print_array(&arr[0],n);
	  printf("\nExpected result: \n");
	  print_array(&sorted_arr[0],n);

     // Compare computed and expected result
	  flag = compare_array(&arr[0], &sorted_arr[0], n);

	 if(flag == 1){
	 	printf("\nTest Passed\n");
	 	}
	 else{
	 	printf("\nTest Failed\n");
	 	}

}



