// Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0;

    fgets(sentence, sizeof(sentence), stdin);

    longest[0] = '\0'; 

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > strlen(longest)) {
                strcpy(longest, word);
            }
            j = 0; 
        }
        i++;
    }

    word[j] = '\0';
    if (strlen(word) > strlen(longest)) {
        strcpy(longest, word);
    }

    printf("%s\n", longest);
    return 0;
}
