/*
 ============================================================================
 Name        : 2-HW2.c
 Author      : laila
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// C program to check vowel or consonant
int main()
{
	char alphabet;
	printf("enter the alphabet to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&alphabet);
    switch (alphabet)
    {
    case 'a':
    case 'A':
    	printf("%c is vowel",alphabet);
    	break;
    case 'e':
    case 'E':
    	printf("%c is vowel",alphabet);
    	break;
    case 'i':
    case 'I':
    	printf("%c is vowel",alphabet);
    	break;
    case 'o':
    case 'O':
    	printf("%c is vowel",alphabet);
    	break;
    case 'u':
    case 'U':
    	printf("%c is vowel",alphabet);
    	break;
    default:
    	printf("%c is consonant",alphabet);
    	break;

    }
}
