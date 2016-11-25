/*
 * =============================================================================================================================================
 * Name:perfect_number_test.c
 * Description: A simple test function for verifying and validating result for function perfect_num_check()
 * License: MIT
 * Copyright: EmbeddedGeeks
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-check-given-number-perfect-number-or-not
 * =============================================================================================================================================
 */

#include<stdio.h>
#include"perfect_number.h"

int main(void){

	int num1,num2,num3, return_value1,return_value2;
	printf("Test function for checking perfect number\n");

	// function call for test case-1
	// 6 is a perfect number, because 1, 2, and 3 are its proper positive divisors, and 1 + 2 + 3 = 6
	num1 = 6;
	printf("Case-1: given number = %d \n",num1);

	return_value1 = perfect_num_check(num1);


	//Verifying and validating result
		printf("Expected result = %d is a perfect number \n", 6);

		if (return_value1==1) {
			printf("Test Passed");
		}
		else {
			printf("Test Failed");
		}


		   printf("\n");

	// function call for test case-2
	// 8 is not a perfect number, because sum of its proper positive divisors,i.e., 1 + 2 + 4 = 7, not 8
	num2 = 8;
	printf("Case-2: given number = %d \n",num2);

	return_value2 = perfect_num_check(num2);


	//Verifying and validating result
		printf("Expected result = %d is not a perfect number \n", 8);

		if (return_value2 == 0) {
			printf("Test Passed");
		}
		else {
			printf("Test Failed");
		}

	printf("\n");

    // function call for test case-3
	// Enter any number to check whether a number is perfect or not

	printf("Case-3: \n");
    printf("Enter any number: \n");
    scanf("%d",&num3);
    printf("Given number = %d\n",num3);
	perfect_num_check(num3);

}





