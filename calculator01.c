#include <stdio.h>

int main() {
    double num1;
    double num2; 
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer: %.2f", num1 + num2);
    getchar();
    return 0;
}