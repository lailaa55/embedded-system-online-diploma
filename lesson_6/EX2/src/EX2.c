/*
 ============================================================================
 Name        : EX2.c
 Author      : Laila Raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// C program to add two distances (inch-feet system)
struct SDistance{
    int feet;
    float inch;
};

int main()
{
    struct SDistance Distance1 , Distance2 , sum ;
    printf("Enter information of 1st distance \n");
    printf ("Enter feet : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&Distance1.feet);
    printf ("Enter inch : ");
    fflush(stdin);fflush(stdout);
    scanf("%f",&Distance1.inch);

    printf("\n Enter information of 2nd distance \n");
    printf ("Enter feet : ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&Distance2.feet);
    printf ("Enter inch : ");
    fflush(stdin);fflush(stdout);
    scanf("%f",&Distance2.inch);

    sum.feet = Distance1.feet + Distance2.feet;
    sum.inch = Distance1.inch + Distance2.inch;

    if (sum.inch > 12.0)
    {
        sum.inch = sum.inch - 12.0;
        ++sum.feet;
    }
    printf("Sum of distances = %d\' -%f\" ",sum.feet,sum.inch);
    return 0;
}
