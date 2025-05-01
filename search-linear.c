#include <stdio.h>

int linear_search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int key;
    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    int pos = linear_search(arr, n, key);
    if (pos != -1) {
        printf("Key found at position %d\n", pos + 1);
    } else {
        printf("Key not found.\n");
    }
    
    return 0;
}