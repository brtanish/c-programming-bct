#include <stdio.h>

int main() {
    int n, evenCount = 0, oddCount = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Separate even and odd elements into two arrays
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];  // Store even element in 'even' array
        } else {
            odd[oddCount++] = arr[i];    // Store odd element in 'odd' array
        }
    }

    // Output the even array
    printf("Even elements are:\n");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    // Output the odd array
    printf("Odd elements are:\n");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
