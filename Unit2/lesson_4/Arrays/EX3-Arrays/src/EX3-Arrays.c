/*
 ============================================================================
 Name        : EX3-Arrays.c
 Author      : laila raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Program to calculate the transpose of a matrix
int main()
{
	int r,c,i,j;
	int matrix[10][10],transpose[10][10];
	printf("Enter rows and columns of the matrix:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&r,&c);
	//store the elements in matrix
	printf("Enter the elements of the matrix:\n");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element a[%d][%d]:",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&matrix[i][j]);
		}
	}
	//display the matrix
	printf("The matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",matrix[i][j]);
			if(j==(c-1))
				printf("\n");
		}
	}
	//calculate the transpose
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			transpose[j][i]=matrix[i][j];
		}
	}
	//display the transpose matrix
	printf("The transpose is:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",transpose[i][j]);
			if(j==(r-1))
				printf("\n");
		}
	}

}
