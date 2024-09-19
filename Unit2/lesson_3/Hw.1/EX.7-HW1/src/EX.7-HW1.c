/*
 ============================================================================
 Name        : 7-HW1.c
 Author      : laila raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Write Source Code to Swap Two Numbers without temp variable.
int main()
{
	int a,b;
	printf("Enter the value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	printf("Enter the value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&b);

	printf("value of a after swapping = %d \n",((a+b) - (b=a)));
	printf("value of b after swapping = %d \n",((a+b) - (a=b)));

}
