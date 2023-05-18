#include<stdio.h>

int main()
{
    int year,days;

    printf("Enter No. Of Years To Convert Into Days:");
    scanf("%d",&year);

    days = year*365;

    printf("Total Days Are:%d",days);
}