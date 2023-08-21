/*
 ============================================================================
 Name        : 6-HW1.c
 Author      : laila Raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Write Code to Swap Two Numbers
int main()
{
	float a,b;
	float temp;
	printf("Enter the value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);
	printf("Enter the value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	temp=a;
	a=b;
	b=temp;
	printf("value of a after swapping = %f \n",a);
	printf("value of b after swapping = %f \n",b);
}
