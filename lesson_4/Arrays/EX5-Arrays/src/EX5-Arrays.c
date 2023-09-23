/*
 ============================================================================
 Name        : EX5-Arrays.c
 Author      : laila raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//C program to search in an array
int main()
{
	int n,arr[20],i,searchedNum;
	printf("Enter the number of elements:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	//store the elements in the array
	printf("Enter the elements of the array:\n");
	fflush(stdin); fflush(stdout);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	//search for element
	printf("Enter the number to be searched:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&searchedNum);
	for(i=0;i<n;i++)
	{
		if(searchedNum == arr[i])
			printf("Number found at the location = %d",i+1);
	}
}
