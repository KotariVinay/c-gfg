/*
Name : K.Y.Nag Sai Vinay
Date : 20-02-2024
Description : WAP to find largest of three numbers
Sample input : 10 20 30
Sample output : 30
*/
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    int largest;
    largest = (num1>num2)?(num1>num3?num1:num3):(num2>num3?num2:num3);
    printf("Largest of 3 is : %d",largest);
    return 0;

}

