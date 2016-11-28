/*
 * print_array.c
 *

 */

#include<stdio.h>
#include"insertion-sort.h"

// A simple function to print an array of size n
void print_array(int *arr, int n)
{
   int i;
   for (i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}



