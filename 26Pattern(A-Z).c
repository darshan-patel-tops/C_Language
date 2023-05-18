#include <stdio.h>

int main() {
    char c = 'A';
 
    for (int i = 1; i <= 5; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%c ", c);
            c++;
        }
        
        c = 'A';
        
        printf("\n");
    }

    return 0;
}