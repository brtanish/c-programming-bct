#include <stdio.h>

int main() {
    int n, element, position;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n+1];  // We need one extra space for the new element

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to insert and its position
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);

    // Check if the position is valid
    if (position < 1 || position > n + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", n + 1);
    } else {
        // Shift elements to the right to make space for the new element
        for (int i = n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the new element at the specified position
        arr[position - 1] = element;

        // Output the modified array
        printf("Array after insertion:\n");
        for (int i = 0; i <= n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
