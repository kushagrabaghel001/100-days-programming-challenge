// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    char sourceFile[100], destinationFile[100];
    FILE *src, *dest;
    int ch;

    printf("Enter source file name: ");
    scanf("%s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%s", destinationFile);

    src = fopen(sourceFile, "r");

    if (src == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    dest = fopen(destinationFile, "w");

    if (dest == NULL) {
        printf("Error: Cannot create destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destinationFile);

    return 0;
}