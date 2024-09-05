/*
 ============================================================================
 Name        : Q2.c
 Author      : Laila Raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alphabet[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char* p_alphabet =  &alphabet;

	for(int i = 0 ; i < 26 ; i++)
	{
		printf("%c\n",*p_alphabet++);

	}
}
