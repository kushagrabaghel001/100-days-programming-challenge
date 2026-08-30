// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main()
{
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    digits = (int)log10(num) + 1;

    firstDigit = num / (int)pow(10, digits - 1);
    lastDigit = num % 10;

    if (digits == 1)
    {
        swappedNum = num;
    }
    else
    {

        int middle = num % (int)pow(10, digits - 1);
        middle = middle / 10;

        swappedNum = lastDigit * (int)pow(10, digits - 1) + middle * 10 + firstDigit;
    }

    printf("Swapped number = %d\n", swappedNum);

    return 0;
}

