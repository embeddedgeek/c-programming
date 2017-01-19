/* ================================================================================================================
 * Name: selection_sort.c
 * Description: A simple function to implement Selection sort in C
 * Input(s):
 *   arr[] : integer array
 *      n  : integer number (array size)
 * Output(s):
 *   Returns none
 * License: MIT
 * Reference: http://embeddedgeeks.com/programming/selection-sort-program-c
 *
 * ================================================================================================================
 */

#include"selection_sort.h"

void selection_sort(int arr[], int n){

	// A simple function for sorting an array using Selection sort
    int i,j, temp;

    for(i= 0; i < n-1; i++)
    {

    	int index_min = i;

    	// Find minimum element in the given array
    	for(j= i+1; j < n; j++)
    	{
    		if(arr[index_min] > arr[j]){
    			index_min = j;
    		}

    	}
        // Rearrange the array by swapping minimum element with the first element
    		temp = arr[index_min];
    		arr[index_min] = arr[i];
    		arr[i] = temp;
    }

}


