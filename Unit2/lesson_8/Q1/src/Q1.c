/*
 ============================================================================
 Name        : Q1.c
 Author      : Laila Raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int x = 29;
	printf("Address of x = 0x%x \n",&x);
	printf("Value of x = %d \n\n",x);

	char* px = &x;
	printf("Now we will assign x to the pointer px.\n");
	printf("Address of pointer px = 0x%x \n",px);
	printf("Value of pointer px = %d \n\n",*px);

	*px = 34;
	printf("Now we will change the value of x to 34.\n");
	printf("Address of pointer px = 0x%x \n",px);
	printf("Value of pointer px = %d \n\n",*px);

	*px = 7;
	printf("Now we will change the value of x to 7.\n");
	printf("Address of pointer px = 0x%x \n",px);
	printf("Value of pointer px = %d \n\n",*px);


	return 0;
}
