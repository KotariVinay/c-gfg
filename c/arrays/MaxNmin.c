/*
Name : K.Y.Naga Sai Vinay
Date : 17-03-2024
Description : WAP to print maximum and minimum element in an array.
Sample input : 1 2 3
Sample output : max = 3 min = 1
*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements in the array : ");
    for(int i=0;i<size;i++)
    {
	scanf("%d",&arr[i]);
    }
    int max,min;
    if(arr[0]>arr[1])
    {
	max=arr[0];
	min=arr[1];
    }
    else
    {
	max=arr[1];
	min=arr[0];
    }
    for(int i=2;i<size;i++)
    {
	if(arr[i]>arr[0])
	{
	    max=arr[i];
	}
	else if(arr[i]<arr[1])
	{
	    min=arr[i];
	}
    }
    printf("max element is %d\n",max);
    printf("min element is %d",min);
    return 0;

}

