//Find HCF and LCM of two numbers.
#include <stdio.h>

void main() {
    int a,b,num1,num2,temp,gcd,lcm;

    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the sacond number : ");
    scanf("%d",&num2);

    a = num1;
    b = num2;

    // Find the GCD (HCF) using Euclidean Algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;  // GCD is stored in 'a'

    // Find the LCM using the formula LCM = (num1 * num2) / GCD
    lcm = (num1 * num2) / gcd;

    printf("HCF (GCD) of %d and %d is = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is = %d\n", num1, num2, lcm);
}


