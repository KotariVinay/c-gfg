/*
Name : K.Y.naga Sai Vinay
Date : 19-05-2024
Description : C program to find maximum between two numbers using switch case
 */

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter two numbers to find maximum: ");
    scanf("%d%d", &num1, &num2);

    switch(num1 > num2)
    {   
	case 0: 
	    printf("%d is maximum", num2);
	    break;

	case 1: 
	    printf("%d is maximum", num1);
	    break;
    }

    return 0;
}
