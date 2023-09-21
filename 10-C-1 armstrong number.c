//Check whether the given number is Armstrong or not.
//153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.
#include <stdio.h>
#include <math.h>

void main() {
    int n,a,r,i=0;
    float result = 0.0;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    a = n;

    // Calculate the number of digits in the number
    while (a != 0) {
        a = a/10;
        ++i;
    }

    a = n;

    // Check if it's an Armstrong number
    while (a != 0) {
        r = a % 10;
        result =result + pow(r, i);
        a /= 10;
    }

    if ((int)result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

}

