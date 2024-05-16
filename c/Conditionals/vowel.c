/*
Name : K.Y.naga Sai Vinay
Date : 15-05-2024
Description : WAP to find check whether the given charater is vowel or consonant
 */
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
	    ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
	printf("'%c' is Vowel.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
	printf("'%c' is Consonant.", ch);
    }
    else 
    {
      printf("'%c' is not an alphabet.",ch);
    }
	return 0;

    }

