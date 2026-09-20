// Q83: Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i;

    printf("Enter a string: ");
    scanf("%s", str);  

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (isalpha(ch)) { 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}
