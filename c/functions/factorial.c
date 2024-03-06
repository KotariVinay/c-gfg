/*
Name : K.Y.Naga Sai Vinay
Date : 06-03-2024
Description : WAP to print factorial of given number
Sample input : 2
Sample output : 2
*/

#include <stdio.h>
unsigned int factorial(unsigned int n)
{
    int result = 1, i;
    for (i = 2; i <= n; i++)
    {
	result *= i;
    }
    return result;
}
int main()
{
    	int num = 5;
	printf("Factorial of %d is %d", num, factorial(num));
	return 0;
}


