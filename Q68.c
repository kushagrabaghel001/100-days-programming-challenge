// Q68: Delete an element from an array.

#include <stdio.h>

int main() {
    int n, element, i, j;
    scanf("%d", &n);   

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   
    }

    scanf("%d", &element);   

    
    int pos = -1;
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element not found\n");
        return 0;
    }

    
    for (j = pos; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }

    
    for (i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

