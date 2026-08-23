// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main (){

    int n;
    long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <=n; i += 2) {
        product *= i;
    }

    if (n < 2) {
        printf("No even numbers between 1 and %d\n", n);
    } else {
        printf("Product of even numbers from 1 to %d = %lld\n" , n, product);
    }

    return 0;

}