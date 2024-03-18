/*
Name : K.Y.Naga sai Vinay
Date : 18-03-2024
Description : WaP to copy one array to another array
Sample input : 1 2 3 4 5
Sample output : 1 2 3 4 5
*/
#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);

    int arr1[size];

    for (int i=0;i<size;i++)
    {
	scanf("%d",&arr1[i]);
    }

    int arr2[size];

    for(int i=0;i<size;i++)
    {
	arr2[i]=arr1[i];
	printf("%d ",arr2[i]);

    }

    return 0;
}
