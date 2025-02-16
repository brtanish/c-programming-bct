#include <stdio.h>

void sortArray(int arr[], int n, int choice) {
    int temp;
    
    // Sorting in ascending order (choice = 1) or descending order (choice = 2)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((choice == 1 && arr[i] > arr[j]) || (choice == 2 && arr[i] < arr[j])) {
                // Swap elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, choice;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask the user whether to sort in ascending or descending order
    printf("Enter 1 for Ascending Order or 2 for Descending Order: ");
    scanf("%d", &choice);

    // Sort the array based on the user's choice
    sortArray(arr, n, choice);

    // Output the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
