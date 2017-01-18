/* ================================================================================================================
 * Name: main.c
 * Description: Driver function for Quick Sort algorithm
 * Input(s):
 *   value : integer number
 * Output(s):
 *   Display result for each case
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/quick-sort-program-c
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"selection_sort.h"

int main(void) {

	int value;
	printf("Enter test case number: \n");
	scanf("%d",&value);

    switch (value){
        /* Case-1: Test function call for selection sort algorithm*/
        case 1 :
        	quick_sort_test();
    	    break;

	   /* Case-2: Test function call for selection sort algorithm for array with random elements*/
        case 2 :
    	    quicksort_test_rand();
        	break;
        default:
    	printf("Invalid test case!");
    }
    return 0;
}





