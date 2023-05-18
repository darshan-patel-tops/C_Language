#include <stdio.h>    

int main()
{    

char option;
int number1,number2;
float result;

    printf (" Choose One Of The Option:\n + \n - \n * \n / \n % \n to do calculation \n ");  

        scanf ("%c", &option); 

    printf (" \n Enter  number: ");  
    scanf(" %d", &number1); 

    printf (" Enter  number: ");  
    scanf (" %d", &number2); 

    if(option == '+')
    {
            result = number1 + number2; 

            printf (" Addition of %d and %d is: %.2f", number1, number2, result);  
    } 
    else if(option == '-')
    {
        result = number1 - number2; 

        printf (" Substraction of %d and %d is: %.2f", number1, number2, result);  
    }
    else if(option == '*')
    {
        result = number1 * number2; 

        printf (" Multiplication of %d and %d is: %.2f", number1, number2, result);  
    }
    else if(option == '/')
    {
        result = number1 / number2; 

        printf (" Division of %d and %d is: %.2f", number1, number2, result);  
    }
    else if(option == '%')
    {
        result = number1 % number2; 

        printf (" Reminder of %d and %d is: %.2f", number1, number2, result);  
    }
    else
    {
        printf("Invalid Option");
    }

return 0;   

}  
