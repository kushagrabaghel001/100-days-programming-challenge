// Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int matrix[n][n];
    int isSymmetric = 1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric)
        printf("True");
    else
        printf("False");

    return 0;
}
