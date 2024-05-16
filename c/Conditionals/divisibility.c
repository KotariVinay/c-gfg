/*
Name : K.Y.Naga Sai Vinay
Date : 14-05-2024
Description : C program to check whether a number is divisible by 5 and 11 or not
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the value of number : ");
    scanf("%d",&num);
    if((num%5==0)&&(num%11==0))
    {
	printf("The given number is divisible by 5 and 11");
    }
    else
    {
	printf("The given number is not divisible by 5 and 11");
    }
    return 0;

}

