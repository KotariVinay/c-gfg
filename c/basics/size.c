/*
Name : K.Y.Naga Sai Vinay
Date : 17-02-2024
Description : WAP to print size of a datatype.
Sample input : int
Sample output : 4
*/
#include<stdio.h>
int main()
{
    int num;
    float f;
    char ch;
    double d;

    printf("size of int = %ld\n",sizeof(int));
    printf("size of float = %ld\n",sizeof(float));
    printf("size of double = %ld\n",sizeof(double));
    printf("size of char = %ld\n",sizeof(char));
    return 0;

}

