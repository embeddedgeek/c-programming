/* =============================================================================================================
 * Name: swap_two_array_test.c
 * Description: A simple test function for verifying and validating result of swap_two_array()
 * License: MIT
 * Copyright: EmbeddedGeeks
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-swapping-two-arrays
 * =============================================================================================================
 */

#include<stdio.h>
#include"swap_two_array.h"
#define max_array_size 100


int main(void) {
	int i,n, arr1[max_array_size],arr2[max_array_size];
	int arr1_ori[max_array_size], arr2_ori[max_array_size], flag=0;
	printf("Test function for swapping two arrays\n");

    // Enter number of array element and array elements
    printf("Enter the number of array elements: \n");
	scanf("%d",&n);

	if(n>max_array_size)
		printf("Wrong array size\n");

	if(n<=max_array_size){
		printf("Enter elements of first array:\n");
		for(i=0;i<n;i++)
			scanf("%d",&arr1[i]);

		printf("Enter elements of second array:\n");
				for(i=0;i<n;i++)
					scanf("%d",&arr2[i]);


	// Display given arrays before swapping

	printf("Before swapping: \n");
	printf("Given first array: \n");
			for (i=0;i<n;i++) {
				printf("%d\t",arr1[i]);
			}
	printf("\nGiven second array: \n");
			for (i=0;i<n;i++) {
				printf("%d\t",arr2[i]);
			}


	// Copying data from array 'arr1' to 'arr2_ori' and from 'arr2' to 'arr1_ori' for verification and validation step
	for (i = 0; i < n; i++) {
		arr1_ori[i] = arr1[i];
		arr2_ori[i] = arr2[i];
	}


	// function call for test

	 for (int i=0; i<=n; i++)
	     {
		   swap_two_array(&arr1[i], &arr2[i]);
	     }


	//Verifying and validating result
		printf("\nAfter swapping: \n");
		printf("Computed result: \n");

			printf("First array: \n");
			for (i=0;i<n;i++) {
				printf("%d\t",arr1[i]);
			}
			printf("\nSecond array: \n");
			for (i=0;i<n;i++) {
				printf("%d\t",arr2[i]);
			}

		printf("\nExpected result: \n");

		    printf("First array: \n");
		    for (i=0;i<n;i++) {
				printf("%d\t",arr2_ori[i]);
			}
			printf("\nSecond array: \n");
			for (i=0;i<n;i++) {
				printf("%d\t",arr1_ori[i]);
			}

			for (i=0;i<n;i++){

				if(arr1[i] == arr2_ori[i] && arr2[i] == arr1_ori[i])
					flag=1;
			}

			if(flag==1){
				printf("\nTest Passed");
			}
			else{
				printf("\nTest Failed");
			}
	}

}




