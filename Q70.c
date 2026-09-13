// Q70: Rotate an array to the right by k positions.

#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n
    int temp[n];


    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    
    for (int i = 0; i < n - k; i++) {
        temp[k + i] = arr[i];
    }

    
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (positions to rotate): ");
    scanf("%d", &k);

    rotateRight(arr, n, k);

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
