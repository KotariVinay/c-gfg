/*
Name : K.Y.Naga Sai Vinay
Date : 14-05-2024
Description : WAP to convert days to years,weeks and days
*/
#include<stdio.h>
int main()
{
    int days,years,weeks;
    printf("Enter days : ");
    scanf("%d",&days);
    years=days/365;
    weeks=(days%365)/7;
    days=days-((years*365)+(weeks*7));
    printf("years : %d\nweeks : %d\ndays : %d",years,weeks,days);
    return 0;

}

