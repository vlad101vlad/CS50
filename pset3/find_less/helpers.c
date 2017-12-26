/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

#include "helpers.h"

/*
bool binary_search(int value, int values[], int left, int right)
{
    int m = (left + right)/2;

    if(value == values[m])
        return true;
    if(value > values[m])
        return binary_search(value,values,m+1,right);
    if(value < values[m])
        return binary_search(value,values,left,m-1);

    return false;
}
*/

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
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
    int ok;
    do
    {
        ok = 0;

        for(int i = 0; i < n-1; i++)
            if(values[i] > values[i+1])
            {
                int aux;
                aux = values[i+1];
                values[i+1] = values[i];
                values[i] = aux;
                ok = 1;
            }

    }while(ok == 1);
}
