/*
 ============================================================================
 Name        : EX2-Arrays.c
 Author      : laila raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Program to calculate the average of n numbers entered by the user and stored in array

int main()
{
	float array[100],sum=0,average;
	int n,i;
	printf("Enter the numbers of data:");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter n%d:",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&array[i]);
		sum = sum+array[i];
	}

	average = sum/n;
	printf("The average = %.2f",average);
}
