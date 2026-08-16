// Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is an alphabet
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Convert to lowercase for simplicity
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; // ASCII conversion to lowercase
        }

        // Check for vowels
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("The character is a vowel.\n");
        } else {
            printf("The character is a consonant.\n");
        }
    } else {
        printf("The character is not an alphabet.\n");
    }

    return 0;
}
