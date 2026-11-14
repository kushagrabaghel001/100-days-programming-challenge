// Q140: Define a struct with enum Gender and print person's gender.

#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE
};

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char genderInput[20];

    printf("Enter Gender (MALE/FEMALE): ");
    scanf("%s", genderInput);

    if (strcmp(genderInput, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(genderInput, "FEMALE") == 0)
        p.gender = FEMALE;
    else {
        printf("Invalid Gender!\n");
        return 1;
    }

    if (p.gender == MALE)
        printf("Male\n");
    else
        printf("Female\n");

    return 0;
}