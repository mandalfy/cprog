#include <stdio.h>

int is_whitespace(char ch) {
    return ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r' || ch == '\v' || ch == '\f';
}

int main() {
    char filename[100];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }
    
    int char_count = 0, word_count = 0, line_count = 0, in_word = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        char_count++;
        if (ch == '\n') line_count++;

        if (!is_whitespace(ch)) {
            if (!in_word) {
                word_count++;
                in_word = 1;
            }
        } else {
            in_word = 0;
        }
    }
    
    fclose(fp);
    printf("Characters: %d\n", char_count);
    printf("Words: %d\n", word_count);
    printf("Lines: %d\n", line_count);
    
    return 0;
}
