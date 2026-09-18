// Q80: Multiply two matrices.

#include <stdio.h>

int main() {
    int m, n, p;
    
    scanf("%d %d", &m, &n);
    int A[m][n];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int n2, p2;
    scanf("%d %d", &n2, &p2);

    if (n != n2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }
    
    int B[n2][p2];
    
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < p2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int C[m][p2];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p2; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p2; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
