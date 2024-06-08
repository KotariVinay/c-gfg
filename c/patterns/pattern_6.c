/*
WAP to print this pattern   
     *
    **
   ***
  ****
 *****
 */
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    for(int rows=0;rows<=size-1;rows++)
    {
	for(int cols=0;cols<size-rows;cols++)
	{
	    printf(" ");
	}
	for(int cols=size-rows;cols<=size;cols++)
	{
	    printf("*");
	}
	printf("\n");
    }
    return 0;

}

