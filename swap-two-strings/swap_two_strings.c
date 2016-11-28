/* =============================================================================================================
 * Name: swap-two-strings.c
 * Description: A simple function string_swap() to swap two strings using a temporary variable and strcpy()
 * Input(s):
 *    *string1: pointer to string1
 *    *string2: pointer to string2
 * Output(s):
 *    Return none
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-swapping-two-strings
 *
 * =============================================================================================================
 */


#include"swap_two_strings.h"
#include <string.h>

void string_swap(char *string1,char *string2){

	if(string1 == NULL || string2 == NULL)
	        return;

	// Swap characters of both strings using a third char variable temp
	char temp[max_string_size];

	strcpy(temp,string1);
	strcpy(string1,string2);
	strcpy(string2,temp);

}




