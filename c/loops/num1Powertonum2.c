/*
Name : K.Y.Naga Sai Vinay 
Date : 25-05-2024
Description : Two numbers are entered through the keyboard. Write a program
to find the value of one number raised to the power of another.
*/
#include<stdio.h>
int main()
{
    int num1,num2,output=1,x;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    x=num2;
    while(num2!=0)
    {
	output=output*num1;
	num2--;
    }
    printf("%d raise to the power of %d is %d\n",num1,x,output);
    return 0;

}

