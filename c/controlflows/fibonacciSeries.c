/*
Name : K.Y.Naga Sai Vinay
Date : 26-04-2024
Description : WAP to print fibonacci series
Sample input :
Sample output :
*/
#include<stdio.h>
int main()
{
    int x,y,z,n;
    x=0;y=1;
    scanf("%d",&n);
    printf("%d ",y);
    for(int i=1;i<n;i++)
    {
	z=x+y;
	printf("%d ",z);
	x=y;y=z;
    }
    return 0;

}

