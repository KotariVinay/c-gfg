/*
WAP to print this pattern
     *
    * *
   * * *
  * * * *
 * * * * *
*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
	for(int s=0;s<size-i;s++)
	{
	    printf(" ");
	}
	for(int j=0;j<i+1;j++)
	{
	    printf("* ");
	}
	printf("\n");
    }

    return 0;
}

