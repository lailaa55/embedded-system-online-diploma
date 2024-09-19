/*
 ============================================================================
 Name        : 7-HW2.c
 Author      : laila
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// C program to find the factorial of number

int main()
{
	int x,factorial=1;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	if(x==0)
		printf("The factorial of Zero is one.");
	else if(x<0)
		printf("ERROR, A negative number has no factorial ");
	else
	{
		for(int i=1; i<=x; i++)
			factorial*=i;
		printf("the factorial of %d is %d ",x,factorial);
	}

}
