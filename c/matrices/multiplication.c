/*
Name : K. Y.Naga Sai Vinay
Date : 24-04-2024
Description : WAP for multiplication of two matrices
*/
#include<stdio.h>
int main()
{
    int r1,c1,r2,c2;
    printf("Enter the row1 size : ");
    scanf("%d",&r1);
    printf("Enter the column1 size : ");
    scanf("%d",&c1);
    printf("Enter the row2 size : ");
    scanf("%d",&r2);
    printf("Enter the column2 size : ");
    scanf("%d",&c2);
    if(c1!=r2)
    {
	printf("Matrix cannot be performed");
    }
    else
    {
	int i,j,k,m1[r1][c1],m2[r2][c2];
	printf("Enter the elements of 1st matrix : ");
	for(i=0;i<r1;i++)
	{
	    for(j=0;j<c1;j++)
	    {
		scanf("%d",&m1[i][j]);
	    }
	}
	printf("Enter the elements of 2nd matrix : ");
	for(i=0;i<r2;i++)
	{
	    for(j=0;j<c2;j++)
	    {
		scanf("%d",&m2[i][j]);
	    }
	}
	int m3[r1][c2];
	for(i=0;i<r1;i++)
	{
	    for(j=0;j<c2;j++)
	    {
		m3[i][j]=0;
		for(k=0;k<c1;k++)
		{
		    m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];
		}
	    }
	}
	for(i=0;i<r1;i++)
	{
	    for(j=0;j<c2;j++)
	    {
		printf("%d",m3[i][j]);
	    }
	    printf("\n");
	}
    }
               

    return 0;

}

