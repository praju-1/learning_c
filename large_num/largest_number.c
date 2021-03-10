// C Program to Find the Largest Number Among Three Numbers
#include<stdio.h>
int main()
{
    int num1, num2, num3;
    printf(" Enter first number : ");
    scanf("%d", &num1);
    printf(" Enter second number : ");
    scanf("%d", &num2);
    printf(" Enter third number : ");
    scanf("%d", &num3);

    // num1 is largest if it is greater than both num2 and num3
    if (num1 >= num2 && num1 >= num3)
    {
        printf(" Largest number is : %d\n", num1);
    }
    // num2 is largest if it is greater than both num1 and num3
    else if (num2 >= num1 && num2 >= num3)
    {
        printf(" Largest number is : %d\n", num2);   
    }
    // num3 is largest if it is greater than both num1 and num 2
    else if (num3 >= num1 && num3 >= num2)
    {
        printf(" Largest number is : %d\n", num3);
    }
    
    return 0;
    
}