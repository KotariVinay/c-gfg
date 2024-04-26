/*
Name : K.Y.Naga Sai Vinay
Date : 26-04-2024
Description : WAP to print a message if negative number is entered
Sample input : -1
Sample output : The number entered is negative
*/
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num<0)
    {
	printf("The number entered is negative");
    }
    return 0;

}

