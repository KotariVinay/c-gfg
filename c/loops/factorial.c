/*
Name : K.Y.Naga Sai Vinay
Date : 25-05-2024
Description : Write a program to find the factorial value of any number entered
through the keyboard
 */
#include<stdio.h>
int main()
{
    int num,i=1;
    unsigned long long int fact=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num<0)
    {
	printf("factorial of negative numbers is not defined.\n");
    }
    else
    {
	while(i<=num)
	{
	    fact=fact*i;
	    i++;
	}
	printf("Factorial for %d is : %llu\n",num,fact);
    }
	return 0;
}

