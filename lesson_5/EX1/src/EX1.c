/*
 ============================================================================
 Name        : EX1.c
 Author      : laila raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Program to print prime numbers between two intervals
#include <stdio.h>
#include <stdlib.h>
int CheckPrime(int num);
int main()
{
	int n1,n2,j,flag;
	printf("Please enter two numbers (intervals):");
	fflush(stdin);fflush(stdout);
	scanf("%d %d",&n1,&n2);
	printf("The prime numbers between %d and %d are : \n",n1,n2);
	for(j=n1+1;j<n2;++j)
	{
		flag = CheckPrime(j);
		if(flag==0)
		{
			printf("%d",j);
			printf("\t");
		}
	}
	return 0;
}
int CheckPrime(int num)
{
	int i , flag;
	flag = 0 ;
	for(i=2;i<=num/2;++i)
	{
		if (num%i==0)
		{
			flag = 1;
			break;
		}
	}
	return flag;
}
