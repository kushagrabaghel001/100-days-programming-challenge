// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int sum = 0; sum <= rows + cols - 2; sum++) {
        if (sum % 2 == 0) {
            // Traverse upwards
            for (int i = (sum < rows ? sum : rows - 1); i >= 0; i--) {
                int j = sum - i;
                if (j >= 0 && j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        } else {
            for (int j = (sum < cols ? sum : cols - 1); j >= 0; j--) {
                int i = sum - j;
                if (i >= 0 && i < rows) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }
    
    return 0;
}
