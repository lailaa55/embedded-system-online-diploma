/*
 ============================================================================
 Name        : Q5.c
 Author      : Laila Raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SEmployee{
	char Name[100];
	int Id;
}employee; //global variable of struct type
int main(void) {

	struct SEmployee* p_struct = &employee; //pointer to struct
	struct SEmployee** pp_struct = &p_struct; //pointer to (pointer to struct)

	strcpy((*pp_struct)->Name, "Laila");
	(*pp_struct)->Id = 1002;

	printf("Name: %s\n", (*pp_struct)->Name);
	printf("ID: %d\n", (*pp_struct)->Id);




	return 0;
}
