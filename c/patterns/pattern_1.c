/*
Name : K.Y.Naga Sai Vinay
Date : 07-06-2024
Description : WAP to print the pattern
Sample input : 5
Sample output : *****
                *****
                *****
	        *****
	        *****
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++)
    {
	for(int cols=0;cols<n;cols++)
	{
	    printf("*");
	}
	printf("\n");
    }

    return 0;

}

