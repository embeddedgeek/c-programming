/*
 * insertion-sort-test.c
 *
 *  Created on: Nov 27, 2016
 *      Author: santanusarma
 */

#include<stdio.h>
#include"insertion-sort.h"


void insertion_sort_test(void) {

	int flag;
	printf("Test function for insertion sort\n");

	// Input: arr1 = (5, 3, 6, 9, 4, 2)
	// Output: arr1 = (2, 3, 4, 5, 6, 9)

	  int arr1[6] = {5,3,6,9,4,2};
	             /* To determine the number of elements in the array,
	             we can divide the total size of the array
	             by the size of the array element.*/
	  int n1= sizeof(arr1)/sizeof(arr1[0]);
      printf("Case-1: \n");
	  printf("Given array: \n");
	  print_array(&arr1[0],n1);


	// function call for test insertion sort

	  insertion_sort(&arr1[0],n1);


	  // Verifying and validating result
	  // Expected sorted array (2, 3, 4, 5, 6, 9)
	  int sorted_arr[6] = {2, 3, 4, 5, 6, 9};

	  printf("\nAfter sorting computed result: \n");
	  print_array(&arr1[0],n1);
	  printf("\nExpected result: \n");
	  print_array(&sorted_arr[0],n1);

     // Compare computed and expected result
	  flag = compare_array(&arr1[0], &sorted_arr[0], n1);

	 if(flag == 1){
	 	printf("\nTest Passed\n");
	 	}
	 else{
	 	printf("\nTest Failed\n");
	 	}

}



