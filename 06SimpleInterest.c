#include<stdio.h>

int main()
{
    float principal,rate,time,simpleinterest;
    
    printf("Enter Principal Amount: \n");
    scanf("%f",&principal);
    
    printf("Enter Rate Of Interest: \n");
    scanf("%f",&rate);
    
    printf("Enter Time In Years: \n");
    scanf("%f",&time);

    simpleinterest = (principal*rate*time)/100;
    printf("Your Simple Interest Is:%f",simpleinterest);

    return 0;
}