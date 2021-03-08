// C program to swap two numbers
#include<stdio.h>
int main()
{
    int num1, num2, temp;
    printf(" Enter the value for num1 : ");
    scanf("%d", &num1);

    printf(" Enter the value for num2 : ");
    scanf("%d", &num2);
    // value of num1 assign to temp
    temp = num1;

    // value of num2 assign to num1
    num1 = num2;

    // value of temp(initial value of first) is assigned to second
    num2 = temp;       

    printf("\n After swaping value of num1 is : %d\n", num1);
    printf(" After swapping value of num2 is : %d\n", num2);
    return 0;

}