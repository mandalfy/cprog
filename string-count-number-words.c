#include <stdio.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, 1000, stdin);

    int word_count = 0;
    int i = 0;

    while (str[i] != '\0') {
        // Check for the start of a word
        if ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t') &&
            (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')) {
            word_count++;
        }
        i++;
    }

    printf("Number of words: %d\n", word_count);
    return 0;
}
