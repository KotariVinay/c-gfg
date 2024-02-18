/*
Name : K.Y.Naga Sai Vinay
Date : 18-02-2024
Description : WAP to check the number is positive or negative.
Sample input : 12
Sample output : positive
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num>0)
    {
	printf("%d is positive number",num);
    }
    else if(num<0)
    {
	printf("%d is negative number",num);
    }
    else
    {
	printf("%d is zero",num);
    }
    return 0;

}

