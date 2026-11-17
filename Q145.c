// Q145: Return a structure containing top student's details from a function.

#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student s[], int n)
{
    struct Student top = s[0];

    for (int i = 1; i < n; i++)
    {
        if (s[i].marks > top.marks)
        {
            top = s[i];
        }
    }

    return top;
}

int main()
{
    int n = 3;
    struct Student students[3];

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d",
              students[i].name,
              &students[i].roll,
              &students[i].marks);
    }

    struct Student topStudent = getTopStudent(students, n);

    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           topStudent.name,
           topStudent.roll,
           topStudent.marks);

    return 0;
}