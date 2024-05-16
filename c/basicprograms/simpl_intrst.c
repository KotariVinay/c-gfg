/*
Name : K.Y.naga Sai Vinay
Date : 14-05-2024
Description : C program to calculate Simple Interest
*/
#include<stdio.h>
int main()
{
    float principle,time,rate,SI;
    printf("Enter amount :");
    scanf("%f",&principle);

    printf("Enter time : ");
    scanf("%f",&time);

    printf("Enter rate : ");
    scanf("%f",&rate);

    SI=(principle * time * rate )/100;

    printf("Simple interest : %.2f",SI);

    return 0;

}

