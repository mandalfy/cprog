#include <stdio.h>

typedef struct {
    double real;
    double imag;
} complex;

complex add(complex a, complex b) {
    complex result = {a.real + b.real, a.imag + b.imag};
    return result;
}

complex subtract(complex a, complex b) {
    complex result = {a.real - b.real, a.imag - b.imag};
    return result;
}

void print_complex(complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    complex c1, c2;
    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%lf %lf", &c1.real, &c1.imag);
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%lf %lf", &c2.real, &c2.imag);
    
    complex sum = add(c1, c2);
    complex diff = subtract(c1, c2);
    
    printf("Sum: ");
    print_complex(sum);
    printf("Difference: ");
    print_complex(diff);
    
    return 0;
}