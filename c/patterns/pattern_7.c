/*
 WAP to print this pattern  
 *****
  ****
   ***
    **
     *
*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    for(int rows=0;rows<size;rows++)
    {
	for(int cols=0;cols<rows;cols++)
	{
	    printf(" ");
	}
	for(int cols=0;cols<size-rows;cols++)
	{
	    printf("*");
	}
	printf("\n");
    }

    return 0;

}

