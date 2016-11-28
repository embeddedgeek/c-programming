/* ================================================================================================================
 * Name: main.c
 * Description: Driver function for array sorting using Insertion sort
 * Input(s):
 *   value : integer number
 * Output(s):
 *   Display result for each case
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-insertion-sort
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"insertion-sort.h"

int main(void) {

	int value;
	printf("Enter value: \n");
	scanf("%d",&value);

    switch (value){
        /* Case-1: Test function call for Insertion sort verification and validation*/
        case 1 :
    	    insertion_sort_test();
    	    break;

	   /* Case-2: Function call to sort an array using Insertion sort*/
        case 2 :
        	array_sorting();
        	break;
        default:
    	printf("Invalid entry!");
    }
    return 0;
}




