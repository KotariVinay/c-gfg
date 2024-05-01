/*
Name : K.Y.Naga Sai Vinay
Date : 01-05-2024
Description : converting rupees into paise
Sample input : 1
Sample output : 100
*/
#include<stdio.h>
int main()
{
    int rs;
    const int ps=100;
    printf("Enter the rupees : ");
    scanf("%d",&rs);
    printf("\n%d paise",rs*ps);

    return 0;

}

