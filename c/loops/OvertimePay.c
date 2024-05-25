/*
Name : K.Y.Naga Sai Vinay
Date : 25-05-2024
Description : Write a program to calculate overtime pay of 10 employees.
              Overtime is paid at the rate of Rs. 12.00 per hour for every hour
              worked above 40 hours. Assume that employees do not work for
              fractional part of an hour.
*/
#include<stdio.h>
int main()
{
    int count=1,working_hrs;
    float overtime_pay;
    while(count<=10)
    {
	    printf("Enter the working hours of employee %d : \n",count);
	    scanf("%d",&working_hrs);
	if(working_hrs>40)
	{
	    overtime_pay=(working_hrs-40)*12.00;
	    printf("Employee %d overtime pay is %f\n\n",count,overtime_pay);
	}
	else
	{
	    printf("You are not worked overtime\n\n");
	}
	count++;
    }

    return 0;

}

