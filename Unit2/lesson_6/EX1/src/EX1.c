/*
 ============================================================================
 Name        : EX1.c
 Author      : Laila Raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// C program to store student information using structure
struct SStudent {
    char m_Name[50];
    int m_Roll;
    double m_Marks;
};

int main()
{
    struct SStudent student;
    printf("Enter student information : \n");
    printf("Enter Name : ");
    fflush(stdin); fflush(stdout);
    scanf("%s",&student.m_Name);
    printf("Enter Roll Number : ");
    fflush(stdin); fflush(stdout);
    scanf("%d",&student.m_Roll);
    printf("Enter Marks : ");
    fflush(stdin); fflush(stdout);
    scanf("%lf",&student.m_Marks);

    printf("\nDisplaying information:\n");
    printf("name: %s \nroll: %d \nmarks: %lf \n ",student.m_Name,student.m_Roll,student.m_Marks);

    return 0;
}
