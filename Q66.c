// Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, element, i, j;
    scanf("%d", &n);   

    int arr[n + 1];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   
    }

    scanf("%d", &element);


    for (i = 0; i < n; i++) {
        if (arr[i] > element) {
            break;
        }
    }

    for (j = n; j > i; j--) {
        arr[j] = arr[j - 1];
    }

    arr[i] = element;

    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
