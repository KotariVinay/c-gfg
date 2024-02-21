/*
Name : K.Y.Naga sai Vinay
Date : 21-02-2024
Description : WAP to print sum of n natural numbers
Sample input : 10
Sample output : 55
*/
#include<stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
	sum=sum+i;
    }
    printf("%d",sum);
    return 0;

}

