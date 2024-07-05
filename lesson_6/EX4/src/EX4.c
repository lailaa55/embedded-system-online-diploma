/*
 ============================================================================
 Name        : EX4.c
 Author      : Laila Raafat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
// C program to store information of 10 student using structure
struct SStudent {
    char m_Name[50];
    int m_Roll;
    double m_Marks;
};

int main()
{
    struct SStudent student[10];
    printf("Enter student information \n");
    for (int i = 0 ; i < 10 ; i++)
    {
    	student[i].m_Roll = i+1;
        printf("For roll number %d \n",student[i].m_Roll);
        printf("Enter Name : ");
        fflush(stdin); fflush(stdout);
        scanf("%s",&student[i].m_Name);
        printf("Enter Marks : ");
        fflush(stdin); fflush(stdout);
        scanf("%lf",&student[i].m_Marks);
    }
    printf("\nDisplaying information:\n");
    for (int i = 0 ; i < 10 ; i++)
    {
    	student[i].m_Roll = i+1;
    	printf("For roll number %d \n",student[i].m_Roll);
        printf("name: %s \nmarks: %lf \n ",student[i].m_Name,student[i].m_Marks);
    }
    return 0;
}
