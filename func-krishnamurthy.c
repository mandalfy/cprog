#include <stdio.h>

unsigned long int fact(int n) {
    unsigned long int result = 1;
    for (int i = 1; i <= n; i++) result *= i;
    return result;
}

int is_krishnamurthy(int num) {
    int original = num;
    unsigned long int sum = 0;
    while (num > 0) {
        sum += fact(num % 10);
        num /= 10;
    }
    return sum == original;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (is_krishnamurthy(num)) {
        printf("%d is a Krishnamurthy number.\n", num);
    } else {
        printf("%d is not a Krishnamurthy number.\n", num);
    }
    
    return 0;
}