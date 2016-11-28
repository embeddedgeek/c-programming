/*
 * main.c
 *
 *  Created on: Nov 27, 2016
 *      Author: santanusarma
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




