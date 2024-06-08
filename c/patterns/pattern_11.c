/* WAP to print this pattern 
 * * * * *
  * * * *
   * * *
    * *
     *
 */
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    for(int i=size;i>0;i--)
    {
	for(int s=0;s<size-i;s++)
	{
	    printf(" ");
	}
	for(int j=0;j<i;j++)
	{
	    printf("* ");
	}
	printf("\n");
    }
    return 0;
}



