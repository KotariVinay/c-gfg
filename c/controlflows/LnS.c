/*
Name : K.Y.Naga Sai Vinay
Date : 26-04-2024
Description : Program to print the larger and smaller of the two number
Sample input : 2 4
Sample output : 4 is larger 2 is smaller
*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
	printf("%d is larger\n",a);
	printf("%d is smaller",b);
    }
    else
    {
	printf("%d is larger\n",b);
	printf("%d is smaller",a);
    }
    return 0;

}

