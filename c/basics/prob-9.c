#include<stdio.h>
int main()
{
    float fahrenhit;
    printf("Enter the temperature : ");
    scanf("%f",&fahrenhit);
    float celsius=(fahrenhit-32)*5/9;
    printf("%.2f",celsius);
    return 0;
}

