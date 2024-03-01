/*
Name : K.Y.Naga Sai Vinay
Date : 01-03-2024
Description : Write a program to find the sum of digits of a given
               number
Sample input : 123
Sample output : 6
*/
#include<stdio.h>
int sumdigit();
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",sumdigit(num));
    return 0;
}
int sumdigit(int num)
{
    if(num==0)
    {
	return 0;
    }
    return (num%10+sumdigit(num/10));
}

