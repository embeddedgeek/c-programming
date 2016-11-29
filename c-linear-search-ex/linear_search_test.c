/* ================================================================================================================
 * Name: linear_search_test.c
 * Description: A simple test function for verification and validation of Linear search
 * Input(s):
 *   arr : integer array
 *   search_num : integer number to be searched in the given array
 * Output(s):
 *   search_num_index : integer number
 *   Display result (if search_num is present or not and its index)
 *   Check if test is passed or failed
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-linear-search
 *
 * ================================================================================================================
 */



#include<stdio.h>
#include"linear_search.h"


void linear_search_test(void) {

	int arr[6] = {5,3,6,9,4,2}, search_num, search_num_index ;
	printf("Test function for linear search\n");

	// Input: arr = (5, 3, 6, 9, 4, 2)
	// Output: search_num = 9, searched_num_index = 3
	  int n= sizeof(arr)/sizeof(arr[0]);
	                 /* To determine the number of elements in the array,
	 	             we can divide the total size of the array
	 	             by the size of the array element.*/
	  printf("Given array: \n");
	  print_array(&arr[0],n);
	  search_num = 9;
      printf("Search if %d is present or not\n",search_num);

	// function call for test linear search

      search_num_index = linear_search(&arr[0],n,search_num);


	  // Verifying and validating result

	  printf("\nComputed result: \n");
	  printf("%d is present at index %d", search_num, search_num_index);

	  printf("\nExpected result: \n");
	  printf("%d is present at index %d\n", 9,3);

     // Compare computed and expected result

	 if(search_num == 9 && search_num_index == 3){
	 	printf("\nTest Passed\n");
	 	}
	 else{
	 	printf("\nTest Failed\n");
	 	}

}

