/*
 ============================================================================
 Name        : 4-HW1.c
 Author      : laila raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Write C Program to Multiply two Floating Point Numbers
int main()
{
	float x;
	float y;
	float multiplication;
	printf("Enter two numbers to be multiplied: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x,&y);
	multiplication = x*y;
	printf("the multiplication of the two numbers is %f ",multiplication);
}
