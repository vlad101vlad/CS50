/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if(n < 0)
        return false;

    int left = 0;
    int right = n-1;

    while(left <= right)
    {
        int m = (left + right) / 2;

        if(value == values[m])
            return true;

        if(value > values[m])
            left = m + 1;

        if(value < values[m])
            right = m - 1;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int arr[65540];
    for(int i = 0; i < 65540; i++)
        arr[i] = 0;

    int ma = 0;
    for(int i = 0; i < n; i++)
    {
        arr[ values[i] ]++;
        if(values[i] > ma)
            ma = values[i];
    }


    int j = 0;
    for(int i = 0; i < ma; i++)
        while(arr[i] != 0)
        {
            values[j] = i;
            j++;
            arr[i]--;
        }
}
