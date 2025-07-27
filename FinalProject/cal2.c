// SDC255 Project - Multiplication and Division
#include<stdio.h>

int multiply_divide(void)
{
    int num1, num2;
    int result1, result2;

    printf("--Multiplication & Division Demo--\nPlease enter an integer.\nNumber A: ");
    scanf("%d", &num1);
    printf("\nPlease enter a second integer.\nNumber B: ");
    scanf("%d", &num2);

    // Multiplication
    result1 = num1 * num2;
    printf("\nA * B is %d", result1);

    // Division with remainder
    if (num2 != 0) {
        result1 = num1 / num2;
        result2 = num1 % num2;
        printf("\nA / B is %d with %d remainder", result1, result2);
    } else {
        printf("\nCannot divide A by B (division by zero)");
    }

    if (num1 != 0) {
        result1 = num2 / num1;
        result2 = num2 % num1;
        printf("\nB / A is %d with %d remainder\n", result1, result2);
    } else {
        printf("\nCannot divide B by A (division by zero)\n");
    }

    return 0;
}
