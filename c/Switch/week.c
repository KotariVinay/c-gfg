/*
Name : K.Y.naga Sai Vinay
Date : 19-05-2024
Description : C program to print day of week name using switch case
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a week number between 1 to 7 : ");
    scanf("%d",&num);
    switch(num)
    {
	case 1 : printf("Monday");
		 break;
        case 2 : printf("Tuesday");
		 break;
	case 3 : printf("Wednesday");
		 break;
        case 4 : printf("Thursday");
		 break;
        case 5 : printf("Friday");
		 break;
	case 6 : printf("saturday");
		 break;
        case 7 : printf("Sunday");
		 break;
	default : printf("Invalid Input");
    }
    return 0;

}

