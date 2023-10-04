//Print Pascal triangle.
#include <stdio.h>

void main() {
    int n,i,j,num;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
         num = 1;
        for ( j = 0; j < n - i - 1; j++) {
            printf("   ");
        }
        for ( j = 0; j <= i; j++) {
            printf("%6d", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

