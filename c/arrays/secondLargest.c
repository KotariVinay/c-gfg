/*
Name : K.Y.Naga Sai Vinay
Date : 18-03-2024
Description : WAP to print second largest element in the array.
Sample input : 1 2 3 4 5
Sample output : 4
*/
#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);
    }
    int largest = arr[0];
    int second_largest = arr[1];

    for(int i=2;i<size;i++)
    {
	if(arr[i]>largest)
	{
	    second_largest=largest;
	    largest=arr[i];
	}
	else if(arr[i]>second_largest)
	{
	    second_largest=arr[i];
	}
    }
    printf("Second largest element is %d",second_largest);

    return 0;

}

