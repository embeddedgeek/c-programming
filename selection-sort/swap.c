/* ===========================================================================================================
 * Name: swap.c
 * Description: A simple function to swap two elements of an array
 * License: MIT
 *
 * ===========================================================================================================
*/
#include"selection_sort.h"

// A simple function to swap two number using pointer
void swap(int arr[], int left, int right){

    int temp;
	temp = arr[right];
	arr[right] = arr[left];
	arr[left] = temp;

}




