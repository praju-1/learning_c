// C Program to Compute Quotient and Remainder.
#include<stdio.h>
int main()
{
    int dividend, divisor, quotient, remainder;
    
    printf(" Enter dividend: ");
    scanf("%d", &dividend);
    
    printf(" Enter divisor: ");
    scanf("%d", &divisor);

    // Computes quotient
    quotient = dividend / divisor;
    // Computes remainder
    remainder = dividend % divisor;

    printf(" Quotient is : %d\n", quotient);
    printf(" Remainder is :  %d\n", remainder);
    return 0;
}