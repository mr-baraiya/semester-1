//C Program find nCr (Combination) and nPr (Permutation).
#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    int i,fact = 1;
    for ( i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void main() {
    int n, r;
    
    printf("Enter the values of n and r: ");
    scanf("%d %d", &n, &r);

    if (n < 0 || r < 0 || r > n) {
        printf("Invalid input. n and r should be non-negative and r should be less than or equal to n.\n");
    } 
	else {
        float nCr, nPr;
        
        nCr = factorial(n) /(float) (factorial(r) * factorial(n - r));
        nPr = factorial(n) / (float)factorial(n - r);
        
        printf("%dC%d = %f\n", n, r, nCr);
        printf("%dP%d = %f\n", n, r, nPr);
    }
}

