/* ================================================================================================================
 * Name: bubble_sort.c
 * Description: A simple function to implement Bubble sort in C
 * Input(s):
 *   arr[] : integer array (unsorted)
 * Output(s):
 *   Returns none
 * License: MIT
 * Reference: http://embeddedgeeks.com/programming/bubble-sort-c
 *
 * ================================================================================================================
 */

#include"bubble_sort.h"

void bubble_sort(int arr[], int n){

	// A simple function for sorting an array using Bubble sort
    int i,j,temp;
    for(i = 0; i < n-1; i++){
    	for(j = 0; j < n-i-1; j++){

    		if(arr[j] > arr[j+1]){
    			temp = arr[j+1];
    			arr[j+1] = arr[j];
    			arr[j] = temp;
    		}
    	}
    }
}






