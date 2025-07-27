// SDC255 Project - Addition and Subtraction
#include<stdio.h>

int add_subtract(void)
{
    int num1, num2;
    int result1, result2;

    printf("--Addition & Subtraction Demo--\nPlease enter an integer.\nNumber A: ");
    scanf("%d", &num1);
    printf("\nPlease enter a second integer.\nNumber B: ");
    scanf("%d", &num2);

    // Addition
    result1 = num1 + num2;
    printf("\n%d + %d is %d", num1, num2, result1);

    // Subtraction
    result1 = num1 - num2;
    result2 = num2 - num1;
    printf("\n%d - %d is %d, %d - %d is %d\n", num1, num2, result1, num2, num1, result2);

    return 0;
}
