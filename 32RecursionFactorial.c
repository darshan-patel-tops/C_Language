<<<<<<< HEAD
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n,result ;
    
    
    printf("Enter A Number:");
    scanf("%d",&n);
    
    result = factorial(n);
    printf("The factorial of %d is %d", n, result);
    
    return 0;
=======
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n,result ;
    
    
    printf("Enter A Number:");
    scanf("%d",&n);
    
    result = factorial(n);
    printf("The factorial of %d is %d", n, result);
    
    return 0;
>>>>>>> 46786bdec42832e1348a5b11c4aeb97046a63607
}