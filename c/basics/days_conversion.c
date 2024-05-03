/*
Name : K.Y.Naga Sai Vinay
Date : 03-05-2024
Description : Program to convert days to years, weeks and days
Sample input : 367
Sample output : 1 year,0 weeks,2 days
 */


#include <stdio.h>

int main()
{
    int days, years, weeks;

    /* Input total number of days from user */
    printf("Enter days: ");
    scanf("%d", &days);

    /* Conversion */
    years = (days / 365);   // Ignoring leap year
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));

    /* Print all resultant values */
    printf("YEARS: %d\n", years);
    printf("WEEKS: %d\n", weeks);
    printf("DAYS: %d", days);

    return 0;
}
