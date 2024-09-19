/*
 ============================================================================
 Name        : 4-HW2.c
 Author      : laila
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// C program to check the number is either positive or negative or zero
int main()
{
	float num;
	printf("enter the number to check:");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num);

	if(num>=0)
	{
		if(num==0)
			printf("the number %f is ZERO",num);
		else
			printf("the number %f is positive",num);
	}
	else
		printf("the number %f is negative",num);
}
