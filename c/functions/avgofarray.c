/*
Name : K.Y.Naga Sai Vinay
Date : 05-03-2024
Description : Write a program to find the average of 5 array elements
using function
Sample input : 1 2 3 4 5
Sample output : 3
*/

#include <stdio.h>
double average();
int main()
{
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int avg = average(arr,n);
    printf("Average = %d ", avg);
    return 0;
}

double average(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
	sum = sum + a[i];
    return (double)sum / n;
}
