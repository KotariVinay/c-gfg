/*
Name : K.Y.Naga Sai Vinay
Date : 29-02-2024
Description : WAP to print square of a number
Sample input : 2
Sample output : 4
*/
#include<stdio.h>
int square();
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("%d",square(num));
    return 0;
}
int square(int num)
{
    return num * num;
}

