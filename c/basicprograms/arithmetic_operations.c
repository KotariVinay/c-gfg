/*
Name : K.Y.Naga Sai Vinay
Date : 14-05-2024
Description : Write a program to perform all arithmetic operations
*/
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the values of num1&num2 : ");
    scanf("%d %d",&num1,&num2);

    printf("Sum : %d\n",num1+num2);
    printf("Difference : %d\n",num1-num2);
    printf("Multiplication : %d\n",num1*num2);
    printf("Division : %f\n",(float)num1/num2);
    printf("Modulus : %d\n",num1%num2);
    return 0;

}

