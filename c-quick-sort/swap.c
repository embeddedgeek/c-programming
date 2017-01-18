/* ===========================================================================================================
 * Name: swap.c
 * Description: A simple function to swap two elements of an array
 * License: MIT
 *
 * ===========================================================================================================
*/
#include"quick_sort.h"

// A simple function to swap two numbers
void swap(int arr[], int left, int right){

    int temp;
	temp = arr[right];
	arr[right] = arr[left];
	arr[left] = temp;

}




