#include <stdio.h>
#include <math.h>

int main() {
    int x, y, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exponentiation\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result: %d\n", x + y);
            break;
        case 2:
            printf("Result: %d\n", x - y);
            break;
        case 3:
            printf("Result: %d\n", x * y);
            break;
        case 4:
            if (y == 0) {
                printf("Cannot divide by zero\n");
            } else {
                printf("Result: %f\n", (float)x / y);
            }
            break;
        case 5:
            printf("Result: %lf\n", pow(x, y));
            break;
		default:
            printf("Invalid choice\n");
    }
    return 0;
}

