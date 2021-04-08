// C program sum of Even and Odd Numbers in an Array
#include<stdio.h>
int main()
{
    int array[10];
    int n;
    int i;
    int even_sum = 0;
    int odd_sum = 0;

    printf(" How many number you want in array : ");
    scanf("%d", &n);

    // input and store element into array
    printf(" Enter an array into element : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // sum of even and odd numbers
    for (i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            even_sum += array[i];
        }
        else
        {
            odd_sum += array[i];
        }
        
    }

    // Display result of even and odd sum
    printf(" Sum of even number is : %d\n", even_sum);
    printf(" Sum of odd number is : %d\n", odd_sum);
    
    return 0;
 
}