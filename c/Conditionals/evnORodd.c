/*
Name : K.Y.naga sai Vinay
Date : 15-05-2024
Description : WAP to find the given number is even or odd.
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the given numbers : ");
    scanf("%d",&num);
    if(num%2==0)
    {
	printf("%d is even",num);
    }
    else
    {
	printf("%d is odd",num);
    }
    return 0;

}

