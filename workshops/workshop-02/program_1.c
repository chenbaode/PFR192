#include <stdio.h>

int main(void)
{
    double num1; 
    double num2;
    char op;
    double result = 0;

    printf("Enter a simple expression containing one of four operators +, -, *, /");
    if (scanf(" %lf %c %lf", &num1, &op, &num2) != 3) {
        printf("Invalid input\n");
        return 1;
    }
    
    switch (op) {
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        if (num2 == 0) {
            printf("Divide by 0");
        } else {
            result = num1 / num2;
        }
        break;
    }
    printf("Result: %lf", result);

    return 0;
}