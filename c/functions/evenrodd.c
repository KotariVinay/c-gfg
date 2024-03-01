/*
Name : k.Y.Naga Sai Vinay
Date : 29-02-2024
Description : WAP to find the given number is even or odd.
Sample input : 2
Sample output : even
*/
#include<stdio.h>
int check();
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(check(num))
    {
	printf("The number is even.");
    }
    else
    {
	printf("The number is odd.");
    }	   
    return 0;
}
int check(int num)
{
    return !(num&1);
}
