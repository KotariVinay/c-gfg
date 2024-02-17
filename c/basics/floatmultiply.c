/*
Name : K.Y.Naga Sai Vinay
Date : 17-02-2024
Description : WAP to print multiplication of two floating point numbers
Sample input : 1.2 2.0
Sample output : 2.4
*/
#include<stdio.h>
int main()
{
    float num1,num2,mul;

    printf("Enter the num1 value : ");
    scanf("%f",&num1);

    printf("Enter the num2 value : ");
    scanf("%f",&num2);

    mul=num1*num2;

    printf("multiplication = %.2f \n",mul);

    return 0;

}

