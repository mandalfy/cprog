#include <stdio.h>

int my_strlen(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

void my_strcat(char dest[], char src[]) {
    int len = my_strlen(dest);
    int i = 0;
    while (src[i] != '\0') {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
}

void my_strev(char str[]) {
    int len = my_strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

void my_strcpy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int my_strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0') i++;
    if (str1[i] == str2[i]) return 0;
    else if (str1[i] < str2[i]) return -1;
    else return 1;
}

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";
    
    printf("Length of str1: %d\n", my_strlen(str1));
    my_strcat(str1, str2);
    printf("After strcat: %s\n", str1);
    my_strev(str1);
    printf("After strev: %s\n", str1);
    char str3[100];
    my_strcpy(str3, str1);
    printf("After strcpy: %s\n", str3);
    printf("Comparing str1 and str2: %d\n", my_strcmp(str1, str2));
    
    return 0;
}