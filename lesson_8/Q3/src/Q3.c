/*
 ============================================================================
 Name        : Q3.c
 Author      : Laila Raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char arr[100];
	printf("Enter string:");
	fflush(stdin); fflush(stdout);
	gets(arr);
	char* ptr = &arr[0] + strlen(arr); //To point to the last element in array

	printf("Reversed string:\n");
	for(int i = 0 ; i <= strlen(arr) ; i++)
	{
		printf("%c",*ptr);
		ptr--;

	}
}
