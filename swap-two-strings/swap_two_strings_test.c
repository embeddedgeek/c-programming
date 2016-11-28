/* =====================================================================================================================
 * Name: swap-two-strings-test.c
 * Description: A simple test function for verifying and validating result of string_swap()
 * Input(s):
 *  string1,string2: arrays of char type that are passed (by pointer) to function string_swap() arguments for swapping
 * Output(s):
 *  Display string1 and string2 after swapping
 *  Check if test is passed/failed
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-swapping-two-strings
 *
 * =====================================================================================================================
 */

#include<stdio.h>
#include <string.h>
#include"swap_two_strings.h"

int main(void) {
	char string1[max_string_size],string2[max_string_size];
	char string1_ori[max_string_size], string2_ori[max_string_size];

	printf("Test function for swapping two strings\n");
	printf("Enter the first string: \n");
	fgets(string1,max_string_size,stdin);

	printf("Enter the second string: \n");
	fgets(string2,max_string_size,stdin);

	// Display given strings before swapping
	printf("Entered strings: \n");
	fputs(string1,stdout);
	fputs(string2,stdout);


	// Copying 'string1' to 'string1_ori' and  'string2' to 'string2_ori' for verification and validation step

	   strcpy(string1_ori,string1);
	   strcpy(string2_ori,string2);

	// function call for test

	   string_swap(string1,string2);   // Passing by pointer to function string_swap() arguments


	//Verifying and validating result

		printf("\nAfter swapping: \n");
		printf("Computed result: \n");
		fputs(string1,stdout);
		fputs(string2,stdout);

		printf("\nExpected result: \n");
		fputs(string2_ori,stdout);
	    fputs(string1_ori,stdout);

		if (strcmp(string1,string2_ori) == 0 && strcmp(string2,string1_ori) == 0){
			 printf("\nTest Passed");
		}

		else{
			printf("\nTest Failed");
		}


}


