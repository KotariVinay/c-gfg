/*
Name : K.Y.naga Sai Vinay
Date : 16-05-2024
Description : program to check whether a character is Uppercase or Lowercase
 */

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
	printf("'%c' is uppercase alphabet.", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
	printf("'%c' is lowercase alphabet.", ch);
    }
    else
    {
	printf("'%c' is not an alphabet.", ch);
    }

    return 0;
}

