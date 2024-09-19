/*
 ============================================================================
 Name        : EX5.c
 Author      : Laila Raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// C program to find area by passing argument to macros
#define pi 3.1415
#define area(r) (pi*r*r)

int main()
{
    int radius;
    float area;
    printf("Enter radius: ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&radius);

    area = area(radius);
    printf("\nArea = %f ",area);

    return 0;
}
