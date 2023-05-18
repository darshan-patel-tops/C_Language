#include <stdio.h>

int main()
{
    int width,length;
    float result;
    printf("Program To Find Area Of Rectangle \n");
    printf("Enter Width Of Rectangle\n");
    scanf(" %d", &width); 
    printf("Enter Length Of Rectangle\n");
    scanf(" %d", &length); 
    result = length * width;
    printf("The Area Of Rectangle Is: %.4f",result);


    return 0;
}
