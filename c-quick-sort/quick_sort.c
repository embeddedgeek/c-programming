/*
 *
 /* ================================================================================================================
 * Name: quick_sort.c
 * Description: A simple function to implement Quick sort in C
 * Input(s):
 *   arr[] : integer array
 *   left : integer number
 *   right : integer number
 * Output(s):
 *   Returns none
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-merge-sort
 *
 * ================================================================================================================
 */

#include"quick_sort.h"

void quick_sort(int arr[], int left, int right){

	/*A simple function for sorting an array using quick sort*/
    int index = partition(arr, left, right);

    if(left < index -1)
    {
    	quick_sort(arr,left,index-1); // Sort left half
    }
    if(right > index )
    {
        quick_sort(arr,index,right); // Sort right half
    }
}



