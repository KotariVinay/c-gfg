/*
Name : K.Y.Naga Sai Vinay
Date : 09-04-2024
Description : C program to check Most Significant Bit (MSB) of a number is set or not
Sample input : -1
Sample output : Most Significant Bit (MSB) of -1 is set (1).
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num&(1<<7))
    {
	printf("Most significant Bit of %d is set (1).",num);
    }
    else
    {
	printf("MSB is not set bit");
    }
    return 0;

}

