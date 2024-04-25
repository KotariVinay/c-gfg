/*
Name : K.Y.Naga Sai Vinay
Date : 25-04-2024
Description : C program to add two matrices
Sample input :
Sample output :
*/
#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d %d",&i,&j);
    int A[i][j],B[i][j],C[i][j];
    int rows,cols;
    for(rows=0;rows<i;rows++)
    {
	for(cols=0;cols<j;cols++)
	{
	   scanf("%d",&A[rows][cols]);
	}
    }
    for(rows=0;rows<i;rows++)
    {
        for(cols=0;cols<j;cols++)
        {
           scanf("%d",&B[rows][cols]);
        }
    }
    for(rows=0;rows<i;rows++)
    {
	for(cols=0;cols<j;cols++)
	{
	    C[rows][cols]=A[rows][cols]+B[rows][cols];
	}
    }
    for(rows=0;rows<i;rows++)
    {
	for(cols=0;cols<j;cols++)
	{
	    printf("%d ",C[rows][cols]);
	}
	printf("\n");
    }

    return 0;

}

