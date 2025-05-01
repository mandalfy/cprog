#include <stdio.h>

void prime_factors(int num) {
    if (num <= 1) {
        printf("No prime factors for numbers <= 1.\n");
        return;
    }
    
    while (num % 2 == 0) {
        printf("2 ");
        num /= 2;
    }
    
    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            printf("%d ", i);
            num /= i;
        }
    }
    
    if (num > 1) printf("%d ", num);
    printf("\n");
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Prime factors of %d are: ", num);
    prime_factors(num);
    
    return 0;
}