/*
Name : K.Y.Naga Sai Vinay
Date : 14-05-2024
Description : WAP to find area and perimeter of a rectangle 
*/
#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("Enter the length and breadth of a rectangle : ");
    scanf("%d %d",&length,&breadth);
    
    area=length*breadth;
    perimeter=2*(length+breadth);

    printf("Area of a rectangle : %d\n",area);
    printf("perimeter of a rectangle : %d\n",perimeter);


    return 0;

}

