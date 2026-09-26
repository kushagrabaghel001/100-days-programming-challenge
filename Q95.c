// Q95: Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int isRotation(char s1[], char s2[]) {

    if (strlen(s1) != strlen(s2)) {
        return 0;
    }

    
    char temp[200];  
    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2) != NULL) {
        return 1;
    }
    return 0;
}

int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);

    if (isRotation(str1, str2)) {
        printf("Rotation\n");
    } else {
        printf("Not rotation\n");
    }

    return 0;
}
