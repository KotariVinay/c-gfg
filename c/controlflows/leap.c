/*
Name : K.Y.Naga Sai Vinay
Date : 23-02-2024
Description : WAP to check the given year is leap or not
Sample input : 2000
Sample output : Leap year
*/
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);

    if(year%400==0)
    {
	printf("Leap year");
    }
    else if(year%100==0)
    {
	printf("Not a leap year");
    }
    else if(year%4==0)
    {
	printf("Leap year");
    }
    else
    {
	printf("Not a leap year");
    }
    return 0;

}

