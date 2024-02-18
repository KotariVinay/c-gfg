/*
Name : K.Y.Naga Sai Vinay
Date : 18-02-2024
Description : WAP to check the number is even or odd
Sample input : 12
Sample output : even
*/
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num : ");
    scanf("%d",&num);

    if(num%2==0)
    {
	printf("%d is even number",num);
    }
    else
    {
	printf("%d is odd number",num);
    }
    return 0;

}

