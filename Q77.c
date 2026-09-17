// Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int distinct = 1;

    for (int i = 0; i < r && i < c; i++) {
        for (int j = i + 1; j < r && j < c; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct)
            break;
    }

    if (distinct)
        printf("True");
    else
        printf("False");

    return 0;
}