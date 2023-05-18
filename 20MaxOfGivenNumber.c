#include <stdio.h>

int main() {

    int num, max = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
    
        if (digit > max)
        {
            max = digit;
        }

        num /= 10;

    }

    printf("Max digit = %d\n", max);

    return 0;
}