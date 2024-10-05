/*
Name : K.Y.Naga sai Vinay
Date : 25-05-2024
Description : Write a program to print out all Armstrong numbers between 1 and
500. If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number. For
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).
 */
#include<stdio.h>
int main()
{
    int rem,sum;
    int num,count=1;
    while(count<=500)
    {
	num=count;
	sum=0;
	while(num!=0)
	{
	    rem=num%10;
	    sum=sum+(rem*rem*rem);
	    num=num/10;
	}
	if(count==sum)
	{
	printf("%d is armstrong number\n",count);
	}
	count++;
    }
    return 0;
 }

