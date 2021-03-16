// C Program to Check Whether a Number is Palindrome or Not.
#include <stdio.h>
int main() 
{
    int n; 
    int reversed_num = 0, remainder, original_num;
    
    printf(" Enter an integer: ");
    scanf("%d", &n);
    
    original_num = n;

    // reversed integer is stored in reversed_num
    while (n != 0) 
    {
        remainder = n % 10;
        reversed_num = reversed_num * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (original_num == reversed_num)
        printf(" Entered number is a palindrome.\n");
    else
        printf(" Entered number is not a palindrome.\n");

    return 0;
}

