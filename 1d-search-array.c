#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int item;
    printf("Enter the item to search for: ");
    scanf("%d", &item);
    
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == item) {
            printf("Item found at position %d\n", i + 1);
            found = 1;
            break; // Find first occurrence only
        }
    }
    
    if (!found) {
        printf("Sorry, item not found.\n");
    }
    
    return 0;
}