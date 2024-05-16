/*
Name : K.Y.Naga sai Vinay
Date : 14-05-2024
Description : C program to find diameter,circumference and area of circle
*/
#include<stdio.h>
int main()
{
    float radius,diameter,circumference,area;
    printf("Radius : ");
    scanf("%f",&radius);
    diameter=2*radius;
    circumference=2*3.14*radius;
    area=3.14*radius*radius;
    printf("diameter : %f\ncircumference : %f\narea : %f\n",diameter,circumference,area);
    return 0;

}

