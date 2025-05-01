#include <stdio.h>

unsigned long int fact(int n) {
    if (n < 0) {
        printf("Factorial not defined for negative numbers.\n");
        return 0;
    }
    unsigned long int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    unsigned long int factorial = fact(n);
    if (n >= 0) {
        printf("Factorial of %d is %lu\n", n, factorial);
    }
    
    return 0;
}