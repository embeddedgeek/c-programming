/* ================================================================================================================
 * Name: linear_search_large_array_test.c
 * Description: A simple test function for verification and validation of Linear search for large array
 * Input(s):
 *   arr : integer array
 *   search_num : integer number to be searched in the given array
 * Output(s):
 *   search_num_index : integer number
 *   Display if search_num is present or not
 *   Display number of occurrence of search_num and its corresponding indexes
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/linear-search-c-programming
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"linear_search.h"

int linear_search_large_array_test(void){

	// Enter any array to test linear searching

	int i, search_num, search_num_index, count;
	int arr[array_size];
	printf("Enter any array to test linear search\n");

	printf("Enter elements of array: \n");
	for(i=0;i<array_size;i++)
	  	scanf("%d",&arr[i]);

	printf("Given array: \n");
	print_array(&arr[0],array_size);

	printf("Enter number to be searched: \n");
	scanf("%d",&search_num);

    // function call for linear search

	search_num_index = linear_search(&arr[0],array_size,search_num);

	// Display number of occurrences of search_num and its index return

	if(search_num_index >= 0){
		printf("\nComputed result: \n");
		count = count_occurrence(&arr[0],array_size,search_num);
		printf("%d repeats %d times in the given array\n",search_num, count);
	}

	else if(search_num_index==-1){
	     printf("%d is not present in the given array\n", search_num);
	}
    return 0;
}



