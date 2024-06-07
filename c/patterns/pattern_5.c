/*
   5.WAP to print this pattern
 *
 **
 ***
 ****
 *****
 ****
 ***
 **
 *
 */
#include<stdio.h>
int main()
{
    int SIZE,i,j,k;
    printf("Enter the number : ");
    scanf("%d",&SIZE);
    for (i = 1; i <= SIZE; i++) {
	for (j = 1; j <= i; j++) {
	    printf("*");
	}
	printf("\n");
    }
    for (i = SIZE - 1; i >= 1; i--) {
	for (j = 1; j <= i; j++) {
	    printf("*");
	}
	printf("\n");
    }

	return 0;

    }

