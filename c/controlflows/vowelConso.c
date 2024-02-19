/*
Name : K.Y.Naga Sai Vinay
Date : 19-02-2024
Description : WAP to check the character is vowel or consonant.
Sample input : a
Sample output : vowel
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    switch (ch)
    {
	case 'a' : printf("The character is vowel");
                   break;
	case 'e' : printf("The character is vowel");
                   break;
	case 'i' : printf("The character is vowel");
                   break;
	case 'o' : printf("The character is vowel");
                   break;
	case 'u' : printf("The character is vowel");
                   break;
	case 'A' : printf("The character is vowel");
                   break;
	case 'E' : printf("The character is vowel");
                   break;
	case 'I' : printf("The character is vowel");
                   break;
	case 'O' : printf("The character is vowel");
                   break;
	case 'U' : printf("The character is vowel");
                   break;
        default :  printf("The character is consonant");
    }

    return 0;

}

