/* ================================================================================================================
 * Name: binary_search_test.c
 * Description: A simple test function for verification and validation of Binary search
 * Input(s):
 *   arr : integer array
 *   search_num : integer number to be searched in the given array
 * Output(s):
 *   Display result (if search_num is present or not)
 *   Check if test is passed or failed
 * License: MIT
 * Reference: http://embeddedgeeks.com/programming/binary-search-c-programming
 *
 * ================================================================================================================
 */



#include<stdio.h>
#include"binary_search.h"


int main(void) {

	int arr[] = {11, 25, 19, 23, 45, 50}, search_num,return_val ;
	printf("Test function for Binary search\n");

	// Input: arr = (11, 25, 19, 23, 45, 50)
	// Output: search_num = 19, searched_num_index = 2
	  int n= sizeof(arr)/sizeof(arr[0]);
	                 /* To determine the number of elements in the array,
	 	             we can divide the total size of the array
	 	             by the size of the array element.*/
	  printf("Given array: \n");
	  print_array(&arr[0],n);
	  search_num = 19;
      printf("Search if %d is present or not\n",search_num);

	// function call for test binary search

      return_val = binary_search(&arr[0],search_num, 0, n-1);


	  // Verifying and validating result
      if(return_val==-1){
	        printf("\nComputed result: \n");
	        printf("%d is not present in the given array\n", search_num);
      }
      else{
    	  printf("\nComputed result: \n");
    	  printf("%d is present at index %d\n", search_num, return_val);
      }


      printf("\nExpected result: \n");
      printf("%d is present at index %d\n", 19, 2);

	 if(search_num == 19 && return_val == 2){
	 	printf("\nTest Passed\n");
	 	}
	 else{
	 	printf("\nTest Failed\n");
	 	}
    return 0;
}

