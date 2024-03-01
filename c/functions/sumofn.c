

/*
Name : K.Y.Naga Sai Vinay
Date : 01-03-2024
Description : Write a program to find the sum of sequence of N
              numbers starting from 1
Sample input : 3
Sample output : 6
*/
#include<stdio.h>
int sum();
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",sum(num));
    return 0;
}
int sum(int num)
{
    if(num<1)
    {
	return num;
    }
    return num+sum(num-1);
}
