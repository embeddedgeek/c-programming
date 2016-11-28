/*
 * compare-array.c

 */


#include<stdio.h>
#include"insertion-sort.h"

// A simple function to print an array of size n
int compare_array(int *arr1, int *arr2, int n)
{
   int i,flag = 0;
   for (i=0;i<n;i++){

  	 	if(arr1[i] == arr2[i])
  	 	flag=1;
  	 }
   return flag;
}









