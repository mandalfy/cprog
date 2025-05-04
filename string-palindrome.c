#include <stdio.h>

int string_length(const char *str) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

int is_palindrome(const char *str) {
    int len = string_length(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) return 0;
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    if (is_palindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
