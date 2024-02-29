/*
Name : K.Y.Naga Sai Vinay
Date : 29-02-2024
Description : Write a function to convert temperature given in degree
              fahrenheit to degree Celsius
Sample input : 40
Sample output : 4.44
*/
#include<stdio.h>
double celsius();
int main()
{
    float farnhit;
    printf("Enter the farhenhit value : ");
    scanf("%f",&farnhit);
    printf("%.2f",celsius(farnhit));
    return 0;
}
double celsius(double farnhit)
{
    return 5.0/9.0 * (farnhit - 32.0);
}
