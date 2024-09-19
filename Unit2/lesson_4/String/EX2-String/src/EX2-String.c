/*
 ============================================================================
 Name        : EX2-String.c
 Author      : laila raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//find the length of a string
int main()
{
	char array[20];
	int counter=0;
	printf("Enter a string:");
	fflush(stdin); fflush(stdout);
	gets(array);

	//to calculate the length manually
	for(int i=0;array[i]!=0;i++)
	{
			counter++;
	}
	printf("The length of your string is %d",counter);

}
