#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num>1)
    {
	for(int i=2;i<num;i++)
	{
	    if(num%i==0)
	    {
		printf("Not a Prime number\n");
		break;
	    }
	    else
	    {
		printf("Prime number\n");
		break;
	    }
	}
    }else
    {
	printf("not a prime number");
    }
    return 0;

}

