#include <stdio.h>

int main()
{
    int number1;
    float result;
    printf("Program To Find Area Of Circle \n");
    printf("Enter Radius Of Circle To Find Area \n");
    scanf(" %d", &number1); 
    result = 3.14 * number1 * number1;
    printf("The Area For Given Radius Is: %.4f",result);


    return 0;
}
