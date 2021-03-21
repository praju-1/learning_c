// C program for basic calculator using switch case
#include<stdio.h>
int main() {
    char operator;
    float first, second;
    
    printf(" Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    
    printf(" Enter first operand: ");
    scanf("%f", &first);

    printf(" Enter second operand : ");
    scanf("%f", &second);

    switch (operator) 
    {
    case '+':
        printf(" %.1f + %.1f = %.1f\n", first, second, first + second);
        break;
    case '-':
        printf(" %.1f - %.1f = %.1f\n", first, second, first - second);
        break;
    case '*':
        printf(" %.1f * %.1f = %.1f\n", first, second, first * second);
        break;
    case '/':
        printf(" %.1f / %.1f = %.1f\n", first, second, first / second);
        break;
        // operator doesn't match any case constant
    default:
        printf(" Error! operator is not correct\n");
    }

    return 0;
}