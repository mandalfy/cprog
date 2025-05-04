#include <stdio.h>

int main() {
    char num[100];
    printf("Enter a number: ");
    scanf("%s", num);

    char* words[] = {"Zero", "One", "Two", "Three", "Four", 
                     "Five", "Six", "Seven", "Eight", "Nine"};

    int i = 0;
    while (num[i] != '\0') {
        if (num[i] >= '0' && num[i] <= '9') {
            printf("%s ", words[num[i] - '0']);
        } else {
            printf("Invalid character: %c\n", num[i]);
            return 1;
        }
        i++;
    }

    printf("\n");
    return 0;
}
