// C Program to Display Fibonacci Sequence
#include<stdio.h>
int main()
{
    int i, n, term1 = 0, term2 = 1, next_term;
    printf(" Enter the number : ");
    scanf(" %d", &n);
    printf(" Fibonacci sequence is : \n");

    for (i = 1; i <= n; ++i)
    {
        // Display the fibonacci sequence
        printf(" %d ", term1);
        printf("\n");
        // Next term is addition of previous two terms
        next_term = term1 + term2;
        // term2 assign to term1
        term1 = term2;
        // term2 become next term
        term2 = next_term;
    }
}