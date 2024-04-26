/*
Name : K.Y.Naga Sai Vinay
Date : 26-04-2024
Description : Program to find largest number from three given numbers
Sample input : 1 2 3
Sample output : 3 is the largest
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
	if(a>c)
	{
	    printf("%d is largest",a);
	}
	else
	{
	    printf("%d is largest",c);

	}
    }
    else
    {
	if(b>c)
	{
	    printf("%d is largest",b);
	}
	else
	{
	    printf("%d is largest",c);
	}
    }

    return 0;

}

