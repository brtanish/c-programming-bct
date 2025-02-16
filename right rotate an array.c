#include <stdio.h>

void rightRotate(int arr[], int n) {
    int last = arr[n - 1]; // Store the last element

    // Shift all elements to the right by one position
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Move the last element to the beginning of the array
    arr[0] = last;
}

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Right rotate the array
    rightRotate(arr, n);

    // Output the rotated array
    printf("Array after right rotation:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
