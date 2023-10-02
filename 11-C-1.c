//Swap first and last digits of a number.
#include <stdio.h>

int main() {
    int n,a, firstDigit, lastDigit, swap;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Store the a for later use
    a = n;

    // Extract the last digit
    lastDigit = n % 10;

    // Find the number of digits in the given number
    while (n >= 10) {
        n /= 10;
    }

    // The remaining 'n' now contains the first digit
    firstDigit = n;

    // Swap the first and last digits
    swap = lastDigit;
    swap *= 10;
    swap += a % 100 / 10;
    swap *= 10;
    swap += firstDigit;

    printf("Original number: %d\n", a);
    printf("Number with first and last digits swapped: %d\n", swap);
}


