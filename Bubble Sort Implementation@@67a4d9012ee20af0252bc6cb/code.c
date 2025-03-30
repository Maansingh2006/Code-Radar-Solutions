#include <stdio.h>

// Function to perform Bubble Sort and return the sorted array
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int* sortArray(int arr[], int n) {
    // Perform Bubble Sort
    bubbleSort(arr, n);
    
    // Return the sorted array
    return arr;
}

int main() {
    int n;
    scanf("%d", &n);  // Read the number of elements
    int arr[n];  // Declare an array of size n

    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using sortArray function
    int* sortedArray = sortArray(arr, n);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d", sortedArray[i]);
        if (i < n - 1) printf(" ");  // Space between numbers
    }
    printf("\n");

    return 0;
}
