// Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, key, i, pos = -1;
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        printf("Found at index %d\n", pos);
    else
        printf("-1\n");

    return 0;
}
