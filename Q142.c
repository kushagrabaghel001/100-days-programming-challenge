// Q142: Store details of 5 students in an array of structures and print all.

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Details:\n");
    printf("-------------------------------------------------\n");
    printf("Name\t\tRoll No\t\tMarks\n");
    printf("-------------------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%s\t\t%d\t\t%.2f\n",
               s[i].name,
               s[i].roll_no,
               s[i].marks);
    }

    return 0;
}