/* ================================================================================================================
 * Name: array_sorting.c
 * Description: A simple function to sort an array using Insertion sort
 * Input(s):
 *   arr : integer array of size 'array_size' ('array_size' is defined inside the header file "insertion-sort.h")
 * Output(s):
 *   arr : integer array after sorting
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-insertion-sort
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"insertion_sort.h"

int array_sorting(void){

	  // Enter any array for sorting

	  int i;
	  int arr[array_size];
	  printf("Enter any array for sorting\n");

	  printf("Enter elements of array: \n");
	  	for(i=0;i<array_size;i++)
	  		scanf("%d",&arr[i]);

	 // Display array before sorting

	  printf("Given array: \n");
	/* Passing array arr (by reference) and size of array 'array_size' (by value)
	 function print_array() arguments.*/
	  print_array(arr,array_size);

    // function call for insertion sort
	/* Passing array arr (by reference) and size of array 'array_size' (by value)
	function insertion_sort() arguments.*/

	  insertion_sort(arr,array_size);

    // Print array after sorting

	  printf("Array after sorting: \n");
	  print_array(arr, array_size);
	  return 0;

}
