/* ================================================================================================================
 * Name: main.c
 * Description: Driver function for Binary Search algorithm (for both iterative and recursive technique)
 * Input(s):
 *   value : integer number
 * Output(s):
 *   Display result for each case
 * License: MIT
 * Reference: http://embeddedgeeks.com/programming/binary-search-c-programming
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"binary_search.h"

int main(void) {

	int value;
	printf("Enter test case number: \n");
	scanf("%d",&value);

    switch (value){
        /* Case-1: Test function call for iterative implementation of Binary search algorithm*/
        case 1 :
        	binary_search_iterative_test();
    	    break;

	   /* Case-2: Test function call for recursive implementation of Binary search algorithm*/
        case 2 :
        	binary_search_recursive_test();
        	break;
        default:
    	printf("Invalid test case!");
    }
    return 0;
}




