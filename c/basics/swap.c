/*
Name : K.Y.Naga Sai Vinay
Date : 17-02-2024
Description : WAP to swap two variables.
Sample input : x=10 y=20
Sample output : x=20 y=10
*/
#include<stdio.h>
int main()
{
    int x,y,temp;

    printf("Enter x value : ");
    scanf("%d",&x);

    printf("Enter y value : ");
    scanf("%d",&y);

    temp=x;
    x=y;
    y=temp;

    printf("%d %d",x,y);

    return 0;

}

