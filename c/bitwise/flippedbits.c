/*
Name : K.Y.Naga Sai Vinay
Date : 09-05-2024
Description : C program to count flip all bits of a binary number using bitwise operator
 */

#include <stdio.h>

int main()
{
    int num, flippedNumber;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    flippedNumber = ~num;

    printf("Original number = %d (in decimal)\n", num);
    printf("Number after bits are flipped = %d (in decimal)", flippedNumber);

    return 0;
}
