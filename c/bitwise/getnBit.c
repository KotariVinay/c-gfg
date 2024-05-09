/*
Name : K.Y.Naga Sai Vinay
Date : 09-04-2024
Description : C program to get nth bit of a number
Sample input : 12
                2
Sample output : 2 bit of 12 is set(1)
*/
#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Enter the nth bit value : ");
    scanf("%d",&n);
    int res=num&(1<<n);
    printf("%d bit of %d is set(%d)",n,num,res);
    return 0;

}

