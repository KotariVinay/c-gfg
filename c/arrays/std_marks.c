/*
Name : K.Y.Naga Sai Vinay
Date : 17-03-2024
Description : WAP to find sum and average of marks of 5 students using arrays.
Sample input : 1 2 3 4 5
Sample output : sum = 15,avg = 3
*/
#include<stdio.h>
int main()
{
    int Std_marks[5];
    float sum=0.0;
    printf("Enter the student marks : ");
    for(int i=0;i<5;i++)
    {
	scanf("%d",&Std_marks[i]);
    }
    for(int i=0;i<5;i++)
    {
	sum = sum + Std_marks[i];
    }
    float avg = sum / 5 ;
    printf("sum = %f \nAverage = %f",sum,avg);
    return 0;

}

