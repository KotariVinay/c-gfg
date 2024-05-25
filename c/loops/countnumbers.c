/*
Name : K.Y.Naga Sai Vinay
Date : 25-05-2024
Description : Write a program to enter numbers till the user wants. At the end it
should display the count of positive, negative and zeros entered.
*/
#include<stdio.h>
int main()
{
    int num,pos=0,neg=0,zero=0;
    char choice='y';
    while(choice == 'y' || choice == 'Y')
    {
	printf("Enter the number : ");
	scanf("%d",&num);
	if(num>0)
	{
	    pos++;
	}
	else if(num<0)
	{
	    neg++;
	}
	else
	{
	    zero++;
	}

	printf("Do you want to continue(Y/N)? : ");
	scanf(" %c",&choice);

    }

	printf("Positive = %d\nNegative =%d\nZeros =%d\n",pos,neg,zero);

    return 0;

}

