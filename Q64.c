// Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

void main() {
    long long n;
    int freq[10] = {0};
    int digit, maxDigit, maxCount = 0;

    scanf("%lld", &n);

    if (n < 0) n = -n;   

    while (n > 0) {
        digit = n % 10;      
        freq[digit]++;       
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxCount) {
            maxCount = freq[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);


}
