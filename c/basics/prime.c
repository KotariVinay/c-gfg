/*
Name : K.Y.Naga Sai Vinay
Date : 17-02-2024
Description : WAP to check the given number is prime or not.
Sample input : 2
Sample output : prime number
*/
#include<stdio.h>
int main()
{ 
    int num,flag=1;
    printf("Enter the number : ");
    scanf("%d",&num);
    for(int i=2;i<=num/2;i++)
    {
	if(num%i==0)
	{
	    flag=0;
	    break;
	}
    }
    if(flag)
    {
	printf("prime number");
    }
    else 
    {
	printf("Not a prime number");
    }
    return 0;

}

