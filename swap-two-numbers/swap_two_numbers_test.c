/* =============================================================================================================
 * Name: swap_two_numbers_test.c
 * Description: A simple test function for verifying and validating result of function swap_two_number()
 * Input(s):
 *   num1: an integer number
 *   num2: an integer number
 * Output(s):
 *   Display num1 and num2 after swapping
 *   Check if test is passed/failed
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-swap-two-numbers
 * =============================================================================================================
 */

#include<stdio.h>
#include "swap_two_numbers.h"

int main (void){
	int num1, num2;
	printf("Test function for swapping two numbers\n");


	// function call for test
	num1= 2;
	num2= 3;

	printf("Before swapping num1 = %d and num2 = %d \n",num1,num2);
	// Passing by pointer
	swap_two_number(&num1, &num2);


	//Verifying and validating result
	printf("After swapping: \n");
	printf("Computed result num1= %d and num2= %d \n",num1,num2);
	printf("Expected result num1 = %d and num2 = %d \n",3,2);
	if (num1 == 3 && num2 == 2) {
		printf("Test Passed");
	}
	else {
		printf("Test Failed");
	}
}






