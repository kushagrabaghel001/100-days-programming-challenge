// Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main(){
    int n, sum = 0, remainder;

    scanf("%d", &n);

    while (n !=0) {
        remainder = n % 10;
        sum +=remainder;
        n /=10;
    }

    printf("%d", sum);

    return 0;
    
}