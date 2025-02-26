#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the size of the array

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    // Sorting the array using qsort
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Finding the longest consecutive sequence
    int maxLen = 1, curLen = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) { 
            curLen++;  // Extend sequence
        } else if (arr[i] != arr[i - 1]) {
            curLen = 1;  // Reset for a new sequence
        }

        if (curLen > maxLen) {
            maxLen = curLen;
        }
    }

    printf("%d\n", maxLen);  // Print the result
    return 0;
}