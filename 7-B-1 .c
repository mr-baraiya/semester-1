#include <stdio.h>

void main() {
	 int choice;
     float num1, num2, num3,largest;

    // Input three numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);

    // Find the largest of the first two numbers
    largest = (num1 > num2) ? num1 : num2;
    printf("Choose an operation (1 for addition, 2 for subtraction, 3 for multiplication, 4 for division): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result of addition: %f\n", largest + num3);
            break;
        case 2:
            printf("Result of subtraction: %f\n", largest - num3);
            break;
        case 3:
            printf("Result of multiplication: %f\n", largest * num3);
            break;
        case 4:
            if (num3 != 0) {
                printf("Result of division: %f\n", largest / num3);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.");
            break;
    }
}

