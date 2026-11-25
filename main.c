#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);

    if (b == 0) {
        printf("Division: cannot divide by zero\n");
    } else {
        printf("Division: %.2f\n", (double)a / b);
    }

    return 0;
}
