#include <stdio.h>
int main() {
    double num1;
    double num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Possible operations:\nAnswer \"+\" to do an addition;\nAnswer \"-\" to do a subtraction;\nAnswer \"*\" to do a multiplication;\nAnswer \"/\" to do a division.\n");
    printf("Enter operation: ");
    scanf(" %c", &operator);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    if (operator == '+') {
        printf("%.2f", num1 + num2);
    } else if (operator == '-') {
        printf("%.2f", num1 - num2);
    } else if (operator == '*') {
        printf("%.2f", num1 * num2);
    } else if (operator == '/') {
        printf("%.2f", num1 / num2);
    } else {
        printf("Invalid Operator");
    }


    getchar();
    return 0;
}