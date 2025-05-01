#include <stdio.h>

int main() {
    char text[100];
    printf("Enter a text: ");
    fgets(text, 100, stdin);
    
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - 32; // To uppercase
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = text[i] + 32; // To lowercase
        }
    }
    
    printf("Altered text: %s", text);
    return 0;
}