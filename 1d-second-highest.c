#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int first_max = INT_MIN, second_max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first_max) {
            second_max = first_max;
            first_max = arr[i];
        } else if (arr[i] < first_max && arr[i] > second_max) {
            second_max = arr[i];
        }
    }
    
    if (second_max == INT_MIN) {
        printf("No second highest element exists.\n");
    } else {
        printf("Second highest element: %d\n", second_max);
    }
    
    return 0;
}