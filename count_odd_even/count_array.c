// C program to Count Even and Odd Numbers in an Array
#include<stdio.h>
int main()
{
    int array[10];
    int n, i;
    int even_count = 0;
    int odd_count = 0;

    printf(" How many number you want enter in an array : ");
    scanf("%d", &n);

    // Input and store element into array
    printf(" Enter number into array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    // Checking number even and odd
    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 1)
        odd_count++;
        else
        even_count++;
    }
    
    printf(" Total odd numbers are : %d\n", odd_count);
    printf(" Total even number are : %d\n", even_count);

    return 0;

}