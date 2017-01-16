/* ================================================================================================================
 * Name: main.c
 * Description: Driver function for Merge Sort algorithm
 * Input(s):
 *   value : integer number
 * Output(s):
 *   Display result for each case
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-merge-sort
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"merge_sort.h"

int main(void) {

	int value;
	printf("Enter test case number: \n");
	scanf("%d",&value);

    switch (value){
        /* Case-1: Test function call for merge sort algorithm*/
        case 1 :
        	merge_sort_test();
    	    break;

	   /* Case-2: Test function call for merge sort algorithm for array with random elements*/
        case 2 :
    	    mergesort_test_rand();
        	break;
        default:
    	printf("Invalid test case!");
    }
    return 0;
}





