/*
   WAP to print the pattern
   1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5

 */
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int rows=0;rows<n;rows++)
    {
	for(int cols=0;cols<rows+1;cols++)
	{
	    printf("%d ",cols+1);
	}
	printf("\n");
    }

    return 0;

}

