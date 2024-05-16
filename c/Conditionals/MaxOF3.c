/*
Name : K.Y.Naga Sai Vinay
Date : 15-05-2024
Description : WAP to find maximum value between three numbers
*/
#include<stdio.h>
int main()
{
    int num1,num2,num3,max;
    printf("Enter the values of num1,num2 and num3 : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2)
    {
	if(num1>num3)
	{
	    max=num1;
	}
	else
	{
	    max=num3;
	}
    }
    else
    {
	if(num2>num3)
	{
	    max=num2;
	}
	else
	{
	    max=num3;
	}
    }
    printf("Maximum Value is %d",max);
    return 0;

}

