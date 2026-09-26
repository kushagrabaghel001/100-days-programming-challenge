// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

void reverseWord(char word[]) {
    int i = 0, j = strlen(word) - 1;
    while (i < j) {
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char sentence[200];
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    char word[100];
    int i = 0;

    char *token = strtok(sentence, " ");
    while (token != NULL) {
        strcpy(word, token);
        reverseWord(word);
        printf("%s ", word);
        token = strtok(NULL, " ");
    }

    return 0;
}
