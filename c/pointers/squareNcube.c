/*
Name : K.Y.Naga Sai Vinay
Date : 04-03-2024
Description : WAP to find the square and cube of a number.
Sample input : 2
Sample output : 4 8
*/
#include<stdio.h>
void sqcube(int,int *,int *);
int main()
{
    int num,square,cube;
    scanf("%d",&num);
    sqcube(num,&square,&cube);
    printf("sum & cube of %d is %d %d",num,square,cube);
    return 0;

}
void sqcube(int n,int *s,int *c)
{
  *s=n * n;
  *c=n * *s;
}
