// To find given year is leap year or not.

# include<stdio.h>

int main()
{
    int leap_year ;
    printf("Enter year to be checked:");
    scanf("%d",&leap_year);
    if (leap_year%4==0 && leap_year%100==0 && leap_year%400==0)
    {
        printf("%d is a leap year",leap_year);
    }
    else 
    {
        printf("%d is not a leap year",leap_year);
    }
    return 0;
}