/*
Name : K.Y.Naga Sai Vinay
Date : 14-05-2024
Description : C program to convert centimeter to meter and kilometer

*/
#include<stdio.h>
int main()
{
    float cms;
    printf("Enter length in centimeters : ");
    scanf("%f",&cms);
    printf("Length in meters = %.2f m\nLength in kilometers = %.2f km",cms/100,cms/100000);
    return 0;

}

