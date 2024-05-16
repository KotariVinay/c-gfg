/*
Name : K.Y.Naga Sai Vinay
Date : 14-05-2024
Description : WAP to check the given number is positive or negative or zero.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num>0)
    {
	printf("The given number is positive");
    }
    else if(num<0)
    {
	printf("The given number is negative");
    }
    else
    {
	printf("The given number is Zero");
    }
    return 0;

}

