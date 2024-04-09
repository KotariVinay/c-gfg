/*
Name : K.Y.Naga Sai Vinay
Date : 09-04-2024
Description : C program to check Least Significant Bit (LSB) of a number is set or not
Sample input : 11
Sample output : set
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num&1)
    {
	printf("Least significant bit of %d is set(1).",num);
    }
    else
    {
	printf("Not a set bit");
    }
    return 0;

}

