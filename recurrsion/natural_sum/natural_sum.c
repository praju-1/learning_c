//C Program to Find the Sum of Natural Numbers using Recursion
#include<stdio.h>

int addNumbers(int n);
int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum of natural number is = %d\n", addNumbers(num));
    return 0;
}

// Recurssive function for sum of natural numbers
int addNumbers(int n) 
{
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}