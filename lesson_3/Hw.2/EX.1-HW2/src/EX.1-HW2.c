/*
 ============================================================================
 Name        : 1-HW2.c
 Author      : laila
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Write C program to check either the number is odd or even.

int main()
{
	int number_checked;
	printf("Enter the number you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&number_checked);
	if(number_checked % 2 == 0)
		printf("%d is an even number",number_checked);
	else if(number_checked % 2 != 0)
		printf("%d is an odd number",number_checked);
	else
		printf("wrong choice");

}
