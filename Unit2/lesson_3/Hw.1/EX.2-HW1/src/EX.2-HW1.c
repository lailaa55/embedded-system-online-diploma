/*
 ============================================================================
 Name        : 2-HW1.c
 Author      : laila raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Write C Program to Print a Integer Entered by a User
int main()
{
	int x;
		printf("Enter an integer : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&x);
		printf("the number you entered is : %d",x);
		return 0;
}
