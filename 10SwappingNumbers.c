#include<stdio.h>

int main()
{

    int a,b;

    printf("This Is A Program To Swap 2 Numbers \n");

    printf("Enter 1st Number");
    scanf("%d",&a);
    
    printf("Enter 2nd Number");
    scanf("%d",&b);

    a = a + b ;
    b = a - b ;
    a = a - b ;

    printf("After Swapping Both Numbers \n Number 1 is: %d \n And Number 2 is: %d",a,b);

    return 0;


}