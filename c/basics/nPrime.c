/*
Name : K.Y.Naga Sai Vinay
Date : 17-02-2024
Description : WAP to print n prime numbers
Sample input : 3
Sample output : 2 3 5
*/
#include<stdio.h>
int main()
{
    int i, num, n, count;
    printf("Enter the range: ");
    scanf("%d", &n);
    printf("The prime numbers in between the range 1 to %d:",n);
    for(num = 1;num<=n;num++)
    {
	count = 0;
	for(i=2;i<=num/2;i++)
	{
	    if(num%i==0)
	    {
		count++;
		break;
	    }
	}
	if(count==0 && num!= 1)
	    printf("%d ",num);
    }
    return 0;
}

