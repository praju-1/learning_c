// C Program to Calculate the Sum of Natural Numbers
#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf(" Enter number n : ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        sum += i;
    }
    
    printf(" Sum of natural number is : %d\n", sum);
    return 0;
}