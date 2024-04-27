/*
Name : K.Y.Naga Sai Vinay
Date : 27-04-2024
Description : Program to find whether the alphabet is a vowel or consonant
Sample input : a
Sample output : vowel
*/
#include<stdio.h>
int main()
{
	char ch;
	printf ("Enter an alphabet : ") ;
	scanf("%c",&ch);
	switch(ch)
	{
	case 'a' :
	case 'e' :
	case 'i' :
	case '0' :
	case 'u' :
	printf ("Alphabet is a vowel \n " ) ;
	break;
	default:
	printf ("Alphabet is a consonant\n ");
	}
}


