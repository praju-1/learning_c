// C Program to Find Largest Element in an Array.
#include<stdio.h>
int main()
{
    int array[100], i, n;

    printf(" How many number you want to enter (1 to 100) : ");
    scanf("%d", &n);
    // taking input and store into array
    for (i = 0; i < n; ++i)
    {
        printf(" Enter number %d : ", i+1);
        scanf("%d", &array[i]);
    }

    // storing the largest number to array[0]
    for (i = 1; i < n; ++i) 
    {
        if (array[0] < array[i])
            array[0] = array[i];
    }

    printf(" Largest element = %d\n", array[0]);
  
    return 0;
}