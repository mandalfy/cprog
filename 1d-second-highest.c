#include <stdio.h>

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

    int first_max, second_max;

    // Initialize first and second max based on the first two elements
    if (arr[0] > arr[1]) {
        first_max = arr[0];
        second_max = arr[1];
    } else if (arr[0] < arr[1]) {
        first_max = arr[1];
        second_max = arr[0];
    } else {
        first_max = second_max = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > first_max) {
            second_max = first_max;
            first_max = arr[i];
        } else if (arr[i] < first_max && arr[i] > second_max) {
            second_max = arr[i];
        }
    }

    if (first_max == second_max) {
        printf("No second highest element exists.\n");
    } else {
        printf("Second highest element: %d\n", second_max);
    }

    return 0;
}
