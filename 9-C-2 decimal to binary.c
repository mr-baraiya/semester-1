//. Convert decimal number to binary. (i.e. n=11 ? output: 1101)
#include <stdio.h>

void main() {
    int n, binary = 0, base = 1, r;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0) {
        r = n % 2;
        binary = binary + r * base;
        n = n / 2;
        base = base * 10;
    }

    printf("The binary equivalent is: %d\n", binary);
}


