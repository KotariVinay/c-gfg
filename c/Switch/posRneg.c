/*
Name : K.Y.Naga Sai Vinay
Date : 19-05-2024
Description : C program to check positive negative or zero using switch case
 */ 
#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    switch (num > 0)
    {
	case 1:
	    printf("%d is positive.", num);
	    break;
	case 0:
	    switch (num < 0)
	    {
		case 1: 
		    printf("%d is negative.", num);
		    break;
		case 0:
		    printf("%d is zero.", num);
		    break;
	    }
	    break;
    }

    return 0;
}
