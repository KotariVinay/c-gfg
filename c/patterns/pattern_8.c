/*
   WAP to print this pattern
     *
    ***
   *****
  *******
 *********
 */
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    for(int rows=1;rows<=size;rows++)
    {
	for(int cols=1;cols<=size-rows;cols++)
	{
	    printf(" ");
	}
	for(int cols1=1;cols1<=2*rows-1;cols1++)
	{
	    printf("*");
	}
	printf("\n");
    }
    return 0;

}

