/*
Name : K.Y.Naga Sai Vinay
Date : 17-02-2024
Description : WAP to convert farhenhit to celsius degrees.
Sample input : 40
Sample output : 4.44 degrees
*/
#include<stdio.h>
int main()
{
    float f;

    printf("Enter the farhenhit value : ");
    scanf("%f",&f);
    float c=(f-32.0)*(5.0/9.0);
    printf("degrees = %.2f",c);
    return 0;

}

