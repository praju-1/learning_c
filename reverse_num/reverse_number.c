// C Program to Reverse a Number
#include<stdio.h>
int main()
{
    int number, remainder, rev = 0;
    printf(" Enter number : ");
    scanf("%d", &number);

    while (number != 0)
    {
        remainder = number % 10;
        rev = rev * 10 + remainder;
        number /= 10;
    }
    printf(" Reversed number = %d\n", rev);
    return 0;
}