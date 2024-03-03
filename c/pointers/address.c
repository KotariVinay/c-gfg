/*
Name : K.Y.Naga Sai Vinay
Date : 03-03-2024
Description : WAP to print the address of a variable use this address to get the value of this variable
Sample input : 3
Sample output : 6422220
                3
*/
#include<stdio.h>
int main()
{
    int i=3;
    printf("The address of i is %ls\n",&i);
    printf("The value of i is %d\n",*(&i));
    return 0;
}

