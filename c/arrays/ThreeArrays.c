/*
Name : K.Y.Naga Sai Vinay
Date : 17-03-2024
Description : WAP to read two arrays of size 5 and store sum of these arrays into third array
Sample input : 1 2 3 4 5
               1 2 3 4 5
Sample output :2 4 6 8 10
*/
#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],arr3[5];
    printf("Enter the first array elements : " );
    for(int i=0;i<5;i++)
    {
	scanf("%d",&arr1[i]);
    }
    printf("Enter the second array elements : ");
    for(int i=0;i<5;i++)
    {
	scanf("%d",&arr2[i]);
    }
    printf("sum of two arrays : ");
    for(int i=0;i<5;i++)
    {
	arr3[i]=arr1[i]+arr2[i];
	printf("%d ",arr3[i]);
    }

    return 0;

}

