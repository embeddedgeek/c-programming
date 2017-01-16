/* ================================================================================================================
 * Name: merge.c
 * Description: A simple function to merge sub-arrays to produce a sorted array.
 * Input(s):
 *   arr[] : integer array
 *   temp[]: integer array (working array)
 *   left : an integer (starting location of array)
 *   mid : an integer (middle location of array)
 *   right : an integer (end location of array)
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/c-programming-example-merge-sort
 *
 * ================================================================================================================
 */

#include<stdio.h>
#include"merge_sort.h"

void merge(int arr[], int temp[], int left, int mid, int right)

{

            int i, left_loc, n, temp_loc;


            left_loc = mid - 1;

            temp_loc = left;

            n = right - left + 1;   // No. of elements


            /*Iterate through temporary array.Compare the left and
            * right half arrays and merge the temporary array
            * back into the original array */
while ((left <= left_loc) && (mid <= right))

        {

                if (arr[left] <= arr[mid])

                {

                        temp[temp_loc] = arr[left];

                        temp_loc = temp_loc + 1;

                        left = left +1;

                }

                else

                {

                        temp[temp_loc] = arr[mid];

                        temp_loc = temp_loc + 1;

                        mid = mid + 1;

                }

        }

     // Copy the remaining elements of the left array into the working array

        while (left <= left_loc)

                {

                        temp[temp_loc] = arr[left];

                        left = left + 1;

                        temp_loc = temp_loc + 1;

                }

    // Copy the remaining elements of the right array into the working array
       while (mid <= right)

                {

                        temp[temp_loc] = arr[mid];

                        mid = mid + 1;

                        temp_loc = temp_loc + 1;

                }

    // Copy elements of the temporary array into the original array

                for (i = 0; i <= n; i++)

                {

                        arr[right] = temp[right];

                        right = right - 1;

                }

}
