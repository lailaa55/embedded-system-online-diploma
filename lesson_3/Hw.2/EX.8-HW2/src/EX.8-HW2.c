/*
 ============================================================================
 Name        : 8-HW2.c
 Author      : laila
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// C program to make calculator using switch case
int main()
{
	char operator;
	float x,y;
	printf("Enter an operator either + or - or * or divide : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&operator);

	printf("Enter two operands : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x,&y);

	switch (operator)
	{
	case '+' :
	{
		printf("the sum of the two operands = %f ",x+y);
		break;
	}
	case '-' :
	{
		printf("the subtraction of the two operands = %f ",x-y);
		break;
	}
	case '/' :
	{
		printf("the division of the two operands = %f ",x/y);
		break;
	}
	case '*' :
	{
		printf("the multiplication of the two operands = %f ",x*y);
		break;
	}
	default:
		printf("-----WRONG CHOICE------");


	}


}
