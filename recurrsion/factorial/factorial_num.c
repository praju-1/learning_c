//C Program to Find Factorial of a Number Using Recursion
#include<stdio.h>

long int factorial(int n);
int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d\n", n, factorial(n));
    return 0;
}

// recurssive function for factorial
long int factorial(int n) 
{
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}