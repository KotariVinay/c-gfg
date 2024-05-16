/*
Name : K.Y.Naga Sai Vinay
Date : 15-05-2024
Description : WAP to find maximum between two numbers
*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the values of num1 and num2 : ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    {
	printf("%d is maximum value\n",num1);
    }
    else
    {
	printf("%d is maximum value\n",num2);
    }
    return 0;

}

