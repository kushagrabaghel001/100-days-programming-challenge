// Q63: Merge two arrays.

#include <stdio.h>
void main() {
    int n1, n2, i;

    scanf("%d", &n1);
    int A[n1];
    for (i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &n2);
    int B[n2];
    for (i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }

    int C[n1 + n2];
    for (i = 0; i < n1; i++) {
        C[i] = A[i];
    }
    for(i = 0; i < n2; i++) {
        C[n1 + i] = B[i];
    }

    for (i = 0; i < n1 + n2; i++) {
        printf("%d", C[i]);
    }

}