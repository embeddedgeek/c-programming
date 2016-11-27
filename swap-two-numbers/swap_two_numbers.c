/* ===========================================================================================================
 * Name: swap_two_numbers.c
 * Description: A simple function swap_two_number() to swap two numbers using pointer
 * Input(s):
 *  *num1: pointer to integer
 *  *num2: pointer to integer
 * Output(s):
 *   Returns none
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-swap-two-numbers
 *
 * ===========================================================================================================
*/

#include"swap_two_numbers.h"

// A simple function to swap two number using pointer
void swap_two_number(int *num1, int *num2){

    int temp;
	temp = *num2;
	*num2 = *num1;
	*num1 = temp;

}





