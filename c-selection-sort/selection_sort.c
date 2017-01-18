/*
 * selection_sort.c
 *
 *  Created on: Jan 18, 2017
 *      Author: santanusarma
 */


#include"selection_sort.h"

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


