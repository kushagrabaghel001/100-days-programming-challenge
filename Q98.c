// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);

    if (name[len-1] == '\n') {
        name[len-1] = '\0';
        len--;
    }

    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c.", name[0]);
    }

    int lastSpaceIndex = -1;
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
            if (i+1 < len) {
                printf("%c.", name[i+1]);
            }
        }
    }

    if (lastSpaceIndex != -1) {
        printf(" %s", &name[lastSpaceIndex+1]);
    }

    return 0;
}
