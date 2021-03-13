// C Program to Check Whether a Number is Positive or Negative
#include <stdio.h>
int main()
{
    int number;

    printf(" Enter an integer: ");
    scanf("%d", &number);

    // true if number is less than 0
    if (number < 0)
    {
        printf(" Entered number is negative.\n");
    }
    else
    {
        printf(" Entered number is positive \n");
    }
    


    return 0;
}