#include <stdio.h>

int main()
{
    int base,height;
    float result;
    printf("Program To Find Area Of Triangle \n");
    printf("Enter Base Of Triangle\n");
    scanf(" %d", &base); 
    printf("Enter Height Of Triangle\n");
    scanf(" %d", &height); 
    result = base * height /2;
    printf("The Area Of Triangle Is: %.4f",result);


    return 0;
}
