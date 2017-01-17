/* ================================================================================================================
 * Name: m_sort.c
 * Description: A simple function that recursively splits the array into sub-arrays until
 * sub-array size is 1, then merges those sub-arrays to produce a sorted array.
 * Input(s):
 *   arr[] : integer array
 *   temp[]: integer array (working array)
 *   left : an integer (starting location of array)
 *   right : an integer (end location of array)
 * License: MIT
 * Reference: http://embeddedgeeks.com/c-programming/merge-sort-program-c
 *
 * ================================================================================================================
 */

#include"merge_sort.h"

void m_sort(int arr[], int temp[], int left, int right)

{
        int mid;

        if (left < right)

        {

            mid = (right + left) / 2;

            m_sort(arr, temp, left, mid); // Sort left half of the array

            m_sort(arr, temp, mid+1, right); // Sort right half of the array

            merge(arr, temp, left, mid+1, right); // Merge sorted arrays of step 2 & 3

        }

}


