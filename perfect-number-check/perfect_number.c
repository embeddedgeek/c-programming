/*
 * =============================================================================================================================================
 * Name:perfect_number.c
 * Description: A simple function in c to check whether a number is a perfect number or not
 * License: MIT
 * Copyright: EmbeddedGeeks
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-check-given-number-perfect-number-or-not
 * =============================================================================================================================================
 */

#include "perfect_number.h"
#include<stdio.h>



//A simple function in c to check whether a number is a perfect number or not
extern int perfect_num_check(int num){
  int i=1,sum=0;

  while(i<num){
      if(num%i==0)
           sum=sum+i;
          i++;
  }

  // If num = sum of its proper positive divisors,then,the number num is a perfect number
  // E.g., 6 is a perfect number, because 1, 2, and 3  and 1 + 2 + 3 = 6
  // If sum = num, function perfect_num_check() will return 1 for a perfect number
  // If sum is not equal to num, the given number num is not a perfect number and the function will return 0


  if(sum==num){
	   printf("Computed result = %d is a perfect number \n",num);
       return 1;
  }
  else {
	   printf("Computed result = %d is not a perfect number \n",num);
	   return 0;
  }
}


