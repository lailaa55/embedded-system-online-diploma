/*
 ============================================================================
 Name        : EX2.c
 Author      : laila raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Calculate factorial using recursion
#include <stdio.h>
#include <stdlib.h>
int CalculateFactorial(int num);
int main()
{
	int x;
	printf("Enter a postive integer:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Factorial of %d is %d ",x,CalculateFactorial(x));


}
int CalculateFactorial(int num)
{
	if(num!=1)
		return (num * CalculateFactorial(num-1));
}
