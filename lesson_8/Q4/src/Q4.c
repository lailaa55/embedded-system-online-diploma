/*
 ============================================================================
 Name        : Q4.c
 Author      : Laila Raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[15],size = 0;
	printf("Enter nb of element of array (max 15):");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);

	int *p_arr = NULL;
	p_arr = arr;//points to 1st element in array
	for(int i = 0 ; i < size ; i++)
	{
		printf("element -%d:",i);
		fflush(stdin); fflush(stdout);
		scanf("%d",p_arr+i);
	}

	printf("Array before being reversed:\n");
	for(int i = 0 ; i < size ; i++)
	{
		printf("element -%d: %d\n",i,*p_arr);
		p_arr++;
	}

	p_arr = &arr[size-1]; //to point to last element in array
	printf("Array before being reversed:\n");
	for(int i = size-1 ; i >= 0 ; i--)
	{
		printf("element -%d: %d\n",i,*p_arr);
		p_arr--;

	}

}
