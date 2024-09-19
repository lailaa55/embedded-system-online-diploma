/*
 ============================================================================
 Name        : 3-HW1.c
 Author      : laila raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Write C Program to Add Two Integers

int main()
{
	int x;
	int y;
	int sum=0;
	printf("Enter two integers to be added: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&x,&y);
	sum=x+y;
	printf("the sum of the two numbers is:%d",sum);
}
