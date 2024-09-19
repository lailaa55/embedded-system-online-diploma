/*
 ============================================================================
 Name        : EX1-String.c
 Author      : laila raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char Astring[100],character;
	int i,length,counter=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(Astring);

	printf("Enter a character to find the frequency:");
	fflush(stdin); fflush(stdout);
	scanf("%c",&character);

	length = strlen(Astring);
	for(i=1;i<=length;i++)
	{
		if(character == Astring[i])
			counter = counter + 1;
	}
	printf("The frequency of %c is %d ",character,counter);

}
