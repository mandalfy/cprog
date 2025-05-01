#include <stdio.h>

int binary_search(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int key;
    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    int pos = binary_search(arr, n, key);
    if (pos != -1) {
        printf("Key found at position %d\n", pos + 1);
    } else {
        printf("Key not found.\n");
    }
    
    return 0;
}