/*
Name : K.Y.naga Sai Vinay
Date : 16-05-2024
Description : WAP to check whether a character is alphabet or not
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
    {
	printf("Character is an Alphabet");
    }
    else
    {
	printf("Character is not an Alphabet");
    }
    return 0;

}

