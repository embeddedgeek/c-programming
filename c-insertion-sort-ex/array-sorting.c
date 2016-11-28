/*
 * array-sorting.c
 *
 *  Created on: Nov 27, 2016
 *      Author: santanusarma
 */

#include<stdio.h>
#include"insertion-sort.h"


int array_sorting(void){

	  // Enter any array for sorting

	  int i;
	  int arr2[array_size];
	  printf("Case-2: Enter any array for sorting\n");

	  printf("Enter elements of array: \n");
	  	for(i=0;i<array_size;i++)
	  		scanf("%d",&arr2[i]);

	 // Display array before sorting

	  printf("Given array: \n");
	  print_array(arr2,array_size);

    // function call for insertion sort

	  insertion_sort(arr2,array_size);

    // Print array after sorting

	  printf("Array after sorting: \n");
	  print_array(arr2, array_size);
	  return 0;

}
