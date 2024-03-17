/*
Name : K.Y.Naga Sai Vinay
Date : 17-03-2024
Description : Read an array of 10 integers and count total no. of even and odd elements
Sample input : 1 2 3 4 5 6 7 8 9 10
Sample output : Even = 5 Odd =  5
*/
#include<stdio.h>
int main()
{ 
    int array[10];
    int count=0;
    printf("Enter the values of array elements : ");
    for(int i=0;i<10;i++)
    {
	scanf("%d",&array[i]);
    }
    for(int i=0;i<10;i++)
    {
	if(array[i]%2==0)
	{
	    count++;
	}
    }
    printf("Even Numbers count = %d \nOdd Numbers Count = %d",count,10-count);
    return 0;

}

