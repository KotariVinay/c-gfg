/*
Name : K.Y.Naga Sai Vinay
Date : 17-03-2024
Description : WAP to find largest element in the array.
Sample input : 1 2 3
Sample output : 3
*/
#include<stdio.h>
int main()
{
    int size;
    printf("enter the array size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of array : ");
    for(int i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);
    }
    int large=arr[0];
    for(int i=1;i<size;i++)
    {
	if(arr[i]>large)
	{
	    large=arr[i];
	}
    }
    printf("largest element in the array is %d",large);

    return 0;

}

