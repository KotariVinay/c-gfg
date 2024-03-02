/*
Name : K.Y.Naga Sai Vinay
Date : 02-03-2024
Description : WAP to print swapping of two nnumbers
Sample input : x=2,y=3
Sample output : x=3,y=2
*/
#include<stdio.h>
void swapping(int *,int *);
int main()
{
    int x=2;
    int y=3;
    swapping(&x,&y);
    printf("x=%d y=%d",x,y);
    return 0;
}
void swapping(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

