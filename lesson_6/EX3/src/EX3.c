/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
//C program to add tow complex numbers by passing struct to function
struct SComplex{
	double m_real;
	double m_Imag;
};

struct SComplex AddComplex (struct SComplex A , struct SComplex B);

void PrintComplex (char name [],struct SComplex C);

int main ()
{
	struct SComplex X , Y , R;
	printf("For the 1st complex number:\n");
	printf("Enter real and imaginary part respectively: ");
	fflush(stdin);fflush(stdout);
    scanf("%lf %lf",&X.m_real,&X.m_Imag);

    printf("For the 2nd complex number:\n");
    printf("Enter real and imaginary part respectively: ");
    fflush(stdin);fflush(stdout);
    scanf("%lf %lf",&Y.m_real,&Y.m_Imag);

    R = AddComplex (X , Y);
    PrintComplex ("Sum ", R);

    return 0;
}

struct SComplex AddComplex (struct SComplex A , struct SComplex B)
{
    struct SComplex result ;
    result.m_real = A.m_real + B.m_real ;
    result.m_Imag = A.m_Imag + B.m_Imag ;
    return result;

}

void PrintComplex (char name [],struct SComplex C)
{
    printf("(%s) = (%.1lf) + j(%.1lf)",name,C.m_real,C.m_Imag);
}
