/*
   WAP to print this pattern
 *********
  *******
   *****
    ***
     *
 */
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    for(int rows=size;rows>0;rows--)
    {
	for(int s=0;s<size-rows;s++)
	{
	    printf(" ");
	}
	for(int cols=1;cols<=2*rows-1;cols++)
	{
	    printf("*");
	}
	printf("\n");
    }
return 0;

}

