/*
 ============================================================================
 Name        : EX3-String.c
 Author      : laila Raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//C program to reverse string
int main()
{
	char array[30],temp;
	int i,j;
	printf("Enter a String:");
	fflush(stdin); fflush(stdout);
	gets(array);
	i = 0;
	j = strlen(array)-1;
	while(i<j)
	{
	    temp=array[i];
	    array[i]=array[j];
	    array[j]=temp;
	    i++;
	    j--;
	}
		printf("The reversed String : %s",array);


}
