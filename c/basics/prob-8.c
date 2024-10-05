#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    printf("Before swapping : %d %d\n",num1,num2);
    int temp=num1;num1=num2;num2=temp;
    printf("After swapping : %d %d",num1,num2);

    return 0;

}

