#include <stdio.h>

int main() {

    int num, range, i, j;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter a range: ");
    scanf("%d", &range);

    for (i = 1; i <= num; i++)
    {
        printf("\n Multiplication table of %d:\n", i);

        for (j = 1; j <= range; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }
     
        printf("\n");
    
    }
    return 0;
}