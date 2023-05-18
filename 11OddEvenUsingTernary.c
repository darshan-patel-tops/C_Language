#include<stdio.h>

int main()
{
    int number;

    printf("Enter Number To Check If It's Odd Or Even:");
    scanf("%d",&number);

    (number % 2 == 0 ) ? printf("%d is An Even Number",number) : printf("%d is An Odd Number",number);

    return 0;
}