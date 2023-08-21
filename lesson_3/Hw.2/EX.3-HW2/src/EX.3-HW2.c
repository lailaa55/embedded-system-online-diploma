/*
 ============================================================================
 Name        : 3-HW2.c
 Author      : laila
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// C program to find the largest number among three numbers.

int main()
{
	float a,b,c;
	printf("Enter three numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			printf("the largest number is %f",a);
		else
			printf("the largest number is %f",c);
	}
	else
	{
		if(b>c)
			printf("the largest number is %f",b);
		else
			printf("the largest number is %f",c);
	}

}

