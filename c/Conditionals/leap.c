/*
Name : K.Y.Naga Sai Vinay
Date : 15-05-2024
Description : WAP to find given year is leap or not
*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
    {
	printf("leap year");
    }
    else
    {
	printf("Not a leap year");
    }
    return 0;

}

