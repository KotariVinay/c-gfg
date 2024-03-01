/*
Name : K.Y.Naga Sai Vinay
Date : 01-03-2024
Description : Write a program to find x raise to the power of y ( xy )
Sample input : 2 3
Sample output : 8
*/
#include<stdio.h>
int power();
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",power(x,y));
    return 0;
}
int power(int x,int y)
{
    if(y==1)
    {
       return x;
    }
    return x*power(x,y-1);
}

