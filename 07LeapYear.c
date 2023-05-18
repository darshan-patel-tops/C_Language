#include<stdio.h>

int main()
{
    int year;

    printf("Enter Year To Check If The Year Is Leap Year Or Not: ");
    scanf("%d",&year);

    if(year % 400 == 0 && year % 4 == 0)
    {
        printf("%d Is A Leap Year",year);
    }
    else
    {
        printf("%d Is Not A Leap Year",year);
    }
}