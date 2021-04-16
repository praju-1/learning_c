// C program for insertion sort
#include<stdio.h>
#define MAX 20

int main()
{
    int array[MAX];
    int i, j, k, n;

    printf(" How many number want to enter : ");
    scanf("%d", &n);

    // input and store element in array 
    for (i = 0; i < n; ++i)
    {
        printf(" Enter element %d : ", i+1);
        scanf("%d", &array[i]);
    }

    // Inital array
    printf(" Unsorted list is :");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }

    // Insertion sort
    for (j = 0; j < n; j++)
    {
        k = array[j];
        for (i = j-1; i >= 0 && k < array[i]; i--)
        {
            array[i+1] = array[i];
        }
        array[i+1] = k;
        printf("\n Pass %d, Element inserted in proper place : %d\n", j, k);
        for (i = 0; i < n; i++)
        {
            printf("%d", array[i]);
        }
    }
    printf("\n Sorted list is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");

}