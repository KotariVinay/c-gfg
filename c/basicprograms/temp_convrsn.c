/*
Name : K.Y.Naga Sai Vinay
Date : 14-05-2024
Description : WAP to convert temperature from degree celsius to fahrenhit
*/
#include<stdio.h>
int main()
{
    float celsius,fahrnht;
    printf("Enter the celsius temperature : ");
    scanf("%f",&celsius);
    fahrnht=(celsius*9/5)+32;
    printf("%.2f celsius = %.2f fahrenhit",celsius,fahrnht);
    return 0;

}

