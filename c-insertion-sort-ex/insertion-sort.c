/*
 * insertion-sort.c

 */

#include"insertion-sort.h"

void insertion_sort(int *arr, int n){

	//A simple function for sorting an array using insertion sort

	   int i,j,key;
	   for (j = 1; j < n; j++)
	   {
	       key = arr[j];
	       i = j-1;

	       /* Elements to the left of key (key = arr[j]),i.e.,elements of arr[0..j-1],
	          that are greater than key (i.e., arr[j]), move one position
              to the right, and arr[j] moves into the evacuated position*/

	       while (i >= 0 && arr[i] > key)
	       {
	           arr[i+1] = arr[i];
	           i = i-1;
	       }
	       arr[i+1] = key;
	   }
}
