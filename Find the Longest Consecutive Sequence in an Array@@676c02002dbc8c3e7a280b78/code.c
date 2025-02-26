#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }
    int maxLen = 1, curLen = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) { 
            curLen++;
        } else if (arr[i] != arr[i - 1]) {
            curLen = 1;
        }

        if (curLen > maxLen) {
            maxLen = curLen;
        }
    }

    printf("%d\n", maxLen);
    return 0;
}