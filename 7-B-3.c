#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    int choice;
    
    printf("Enter a number as a string: ");
    fgets(input, sizeof(input), stdin);
    
    printf("Choose the conversion (1 for integer, 2 for float): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        int integerNumber = atoi(input);
        printf("Integer value: %d\n", integerNumber);
    } else if (choice == 2) {
        float floatNumber = atof(input);
        printf("Float value: %.2f\n", floatNumber);
    } else {
        printf("Invalid choice.\n");
    }
    
    return 0;
}

