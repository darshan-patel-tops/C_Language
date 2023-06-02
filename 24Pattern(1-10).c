#include <stdio.h>

int main() {
    int num = 0,input;
    int i,j;

    printf("Enter Number Of Rows:");
    scanf("%d",&input);

    for ( i = 1; i <= input ; i++) 
    {
        for ( j = 1; j <= i; j++) 
        {
            printf("%d", num);
            num++;
        }

        printf("\n");
    }
    
    return 0;
}