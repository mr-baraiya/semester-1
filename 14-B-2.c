//Calculate the average, geometric and harmonic mean of n elements in an array.
#include <stdio.h>
#include <math.h>

void main() {
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the arithmetic mean
    float am = 0;
    for ( i = 0; i < n; i++) {
        am += arr[i];
    }
    am = am/(float)n;

    // Calculate the geometric mean
    float gm = 1;
    for ( i = 0; i < n; i++) {
        gm *= arr[i];
    }
    gm = powf(gm, 1.0 / n);

    // Calculate the harmonic mean
    float hm = 0;
    for ( i = 0; i < n; i++) {
        hm += 1 / (float)arr[i];
    }
    hm = n / hm;

    printf("Arithmetic Mean: %.2f\n", am);
    printf("Geometric Mean: %.2f\n", gm);
    printf("Harmonic Mean: %.2f\n", hm);

}

