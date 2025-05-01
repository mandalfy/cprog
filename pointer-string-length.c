#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    
    char *p = str;
    int length = 0;
    while (*p != '\0') {
        length++;
        p++;
    }
    
    printf("Length of the string: %d\n", length);
    return 0;
}