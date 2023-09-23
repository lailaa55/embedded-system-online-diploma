/*
 ============================================================================
 Name        : EX1-Arrays.c
 Author      : laila raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//the sum of two matrix 2*2 where elements are entered by user
int main()
{
	float A [2][2],B [2][2],sum [2][2];
	int i,j;
	printf("Enter the elements of 1st matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter A[%d][%d]:",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&A[i][j]);
		}
	}

	printf("Enter the elements of 2nd matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter B[%d][%d]:",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%f",&B[i][j]);
		}
	}

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j] = A[i][j] + B[i][j];
		}
	}

	printf("The sum of the two matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%.2f\t",sum[i][j]);
			if (j==1)
				printf("\n");
		}
	}


}
