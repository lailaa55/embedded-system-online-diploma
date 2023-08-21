/*
 ============================================================================
 Name        : 6-HW2.c
 Author      : laila
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// C program to calculate the sum of integer numbers

int main()
{
	int mylimit;//i will calculate the sum of all integer till this number
	int step,sum=0;
	printf(" Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&mylimit);
	step=1;
	while(step<=mylimit)
	{
		sum+=step;
		step++;
	}
	printf("the sum of the integer numbers til %d is = %d ",mylimit,sum);
}
