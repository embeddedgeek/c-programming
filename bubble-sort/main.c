/* ================================================================================================================
 * Name: main.c
 * Description: Driver function for Bubble Sort algorithm
 * Input(s):
 *   value : integer number
 * Output(s):
 *   Display result for each case
 * License: MIT
 * Reference: http://embeddedgeeks.com/programming/bubble-sort-c
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"bubble_sort.h"

int main(void) {

	int value;
	printf("Enter test case number: \n");
	scanf("%d",&value);

    switch (value){
        /* Case-1: Test function call for Bubble sort algorithm*/
        case 1 :
        	bubble_sort_test();
    	    break;

	   /* Case-2: Test function call for Bubble sort algorithm for array with random elements*/
        case 2 :
        	bubblesort_test_rand();
        	break;
        default:
    	printf("Invalid test case!");
    }
    return 0;
}





