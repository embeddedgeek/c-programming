/* ================================================================================================================
 * Name: main.c
 * Description: Driver function for Linear Search algorithm
 * Input(s):
 *   value : integer number
 * Output(s):
 *   Display result for each case
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-linear-search
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"linear_search.h"

int main(void) {

	int value;
	printf("Enter test case number: \n");
	scanf("%d",&value);

    switch (value){
        /* Case-1: Test function call for linear search verification and validation*/
        case 1 :
        	linear_search_test();
    	    break;

	   /* Case-2: Function call for linear search for largr arrayt*/
        case 2 :
        	linear_search_large_array_test();
        	break;
        default:
    	printf("Invalid test case!");
    }
    return 0;
}




