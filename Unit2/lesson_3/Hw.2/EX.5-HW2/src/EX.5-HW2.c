/*
 ============================================================================
 Name        : 5-HW2.c
 Author      : laila
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// C program to check if the character is alphaet or not
int main()
{
	char x;
	printf(" enter the character you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x);
	if( (x>='a' && x<='z') || (x>='A' && x<='Z'))
		printf("%c is alphabet",x);
	else
		printf("%c isn't alphabet",x);
}
