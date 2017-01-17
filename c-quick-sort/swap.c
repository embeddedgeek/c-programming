/*
 * swap.c
 *
 *  Created on: Jan 17, 2017
 *      Author: santanusarma
 */

#include"quick_sort.h"

// A simple function to swap two number using pointer
void swap(int arr[], int left, int right){

    int temp;
	temp = arr[right];
	arr[right] = arr[left];
	arr[left] = temp;

}




