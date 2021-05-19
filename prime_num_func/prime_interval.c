//C Program to Display Prime Numbers Between Intervals Using Function
#include <stdio.h>
int checkPrimeNumber(int n);
int main() 
{
    int num1, num2;
    int i, flag;

    printf(" Enter two positive integers\n");
    printf(" Enter first num :");
    scanf("%d", &num1);
    printf(" Enter second number :  ");
    scanf("%d", &num2);

    printf(" Prime numbers between %d and %d are: ", num1, num2);
    for (i = num1 + 1; i < num2; ++i) 
    {

        // flag will be equal to 1 if i is prime
        flag = checkPrimeNumber(i);

        if (flag == 1)
            printf("%d ", i);
    }
    return 0;

}

// user-defined function to check prime number
int checkPrimeNumber(int n) 
{
    int j, flag = 1;
    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}
