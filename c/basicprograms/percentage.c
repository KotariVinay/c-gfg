/*
Name : K.Y.Naga Sai Vinay
Date : 14-05-2024
Description : program to calculate total average and percentage of five subjects
*/
#include<stdio.h>
int main()
{
    int maths,phy,chem,tel,eng;
    printf("Enter the marks of all five subjects : ");
    scanf("%d %d %d %d %d",&maths,&phy,&chem,&tel,&eng);
    int total=maths+phy+chem+tel+eng;
    float avg=(float)total/5;
    float percntge=(total/500.0)*100;

    printf("Total Marks : %d\n",total);
    printf("Average Marks : %.2f\n",avg);
    printf("percentage : %.2f",percntge);
    return 0;

}

