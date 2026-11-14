// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    char filename[100];
    char text[500];
    FILE *fp;

    printf("Enter file name: ");
    scanf("%s", filename);

    getchar(); 

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}