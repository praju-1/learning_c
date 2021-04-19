// C Program to Multiply Two Floating-Point Numbers
#include<stdio.h>
int main()
{
    float a, b, c;
    printf(" Enter number a : ");
    scanf("%f", &a);

    printf(" Enter number b : ");
    scanf(" %f", &b);

    c = a * b;
    printf(" Multiplication two floating point number is : %.2f\n", c);
    return 0;
}