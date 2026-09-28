// Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {

            for(int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n"); 
        }
    }

    return 0;
}
