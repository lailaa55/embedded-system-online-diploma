/*
 ============================================================================
 Name        : EX4-Arrays.c
 Author      : Laila Raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//C program to insert an element in an array
int main()
{
    int n,i,insertedNumber,location,array[30];
	printf("Enter the number of elements:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	//display the array
	printf("the elements of this arrays are:\n");
	for(i=0;i<=n;i++)
	{
	    array[i]=i+1;
		if(i==n)
			printf("\n");
		else
			printf("%d\t",array[i]);
	}
	printf("Enter the number to be inserted:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&insertedNumber);

	printf("Enter the location:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&location);
	for(i=n;i>=location;i--)
	{
		array[i] = array[i-1];
	}
	n++;
	array[location-1] = insertedNumber;

	//display the array after modification
	printf("The array after modification:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}


}
