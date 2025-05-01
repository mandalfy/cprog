#include <stdio.h>
#include <string.h>

int main() {
    char num[100];
    printf("Enter a number: ");
    scanf("%s", num);
    
    char* words[] = {"Zero", "One", "Two", "Three", "Four", 
                     "Five", "Six", "Seven", "Eight", "Nine"};
    
    for (int i = 0; i < strlen(num); i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            printf("%s ", words[num[i] - '0']);
        } else {
            printf("Invalid character: %c\n", num[i]);
            return 1;
        }
    }
    printf("\n");
    
    return 0;
}