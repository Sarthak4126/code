#include <stdio.h>

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Declare and initialize an array
    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the bubbleSort function to sort the array
    bubbleSort(arr, size);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
