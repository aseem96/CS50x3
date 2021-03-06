/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
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
    // TODO: implement a searching algorithm
	/*int i;
	if(value < 0)
		return false;
	for(i = 0;i < n;i++)
	{
		if(value == values[i])
			return true;
	}
    return false;*/
	int flag = 0;
	sort(values,n);
	if(value < values[0] || value > values[n-1])
		return false;
	else
	{
		int low=0,high=n,mid;
		mid=(high+low)/2;
		while(mid != high)
		{
			if(value<values[mid])
				high=mid-1;
			if(value>values[mid])
				low=mid+1;
			mid=(high+low)/2;
			if(value == values[mid])
			{
				flag = 1;
				break;
			}
		}
		if(flag == 1)
			return true;
		else
			return false;
	}
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
	int flag=1,temp;
	int i,j;
	for(i=0;i<n-1 && flag==1;i++)
	{
		flag=0;
		for(j=0;j<n-1;j++)
		{
			if(values[j]>values[j+1])
			{
				flag=1;;
				temp=values[j];
				values[j]=values[j+1];
				values[j+1]=temp;
			}
		}
	}
    return;
}
