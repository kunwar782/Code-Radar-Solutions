#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int j = 0;  // This pointer will track the position to place non-zero elements.
    
    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }
    
    // Fill the remaining positions with zeroes
    for (int i = j; i < n; i++) {
        arr[i] = 0;
    }
    
    // Print the array after moving zeroes to the end
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
