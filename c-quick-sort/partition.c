/*
 * partition.c
 *
 *  Created on: Jan 17, 2017
 *      Author: santanusarma
 */

#include"quick_sort.h"

int partition(int arr[], int left, int right)
{
    int key = arr[(left+right)/2];

    while(left <= right)
    {
    	// Find elements on the left that should be on right
    	while(arr[left] < key)
    	{
    		left++;
    	}

    	// Find elements on the right that should be on left
    	while(arr[right] > key)
    	{
    	    right--;
    	}

    	// Swap elements and move left and right indices
    	if(left <= right)
    	{
    	    swap(arr, left, right);  // Swap elements
    	    left++;
    	    right--;
    	}

    }
    return left;
}
