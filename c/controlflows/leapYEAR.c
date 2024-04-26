/*
Name : K.Y.Naga Sai Vinay
Date : 26-04-2024
Description : Program to find whether a year is leap or not
Sample input : 2024
Sample output : leap
*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(year%100==0)
    {
	if(year%400==0)
	{
	    printf("%d is leap year",year);
	}
	else
	{
	    printf("Not a leap year");
	}
    }
    else
    {
	if(year%4==0)
	{
	    printf("%d is leap year",year);
	}
	else
	{
	    printf("Not a leap year");
	}
    }
    return 0;

}

