/*
Name : K.Y.Naga Sai Vinay
Date : 18-03-2024
Description : WAP to insert a new element in an array
Sample input : 1 2 3 4 5
Sample output : 1 2 6 3 4 5
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
     int pos,num;

     scanf("%d %d",&pos,&num);

     if(pos>size+1| pos<=0)
     {
	 printf("Invalid Input");
     }
     else
     {
	 for(int i=size;i>=pos;i--)
	 {
	     arr[i]=arr[i-1];
	 }
	 arr[pos-1]=num;
	 size++;
         for(int i=0;i<size;i++)
    	 {
    	     printf("%d ",arr[i]);
    	 }
     }
     return 0;
}

