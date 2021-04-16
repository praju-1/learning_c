// C program for bubble sort
#include<stdio.h>
#define MAX 20

int main()
{
    int array[MAX];
    int i, j, k, n;
    int temp;
    int xchanges;

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
    
    // bubble sort
    for (i = 0; i < n-1; i++)
    {
        xchanges = 0;
        for (j = 0; j < n-1-i; j++)
        {
            // compare number
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                xchanges++;
            }
        }
        if (xchanges == 0)
        {
            break;
        }
        // Display step for sorting
        printf("\n After pass %d elements are :", i+1);
        for (k = 0; k < n; k++)
        {
            printf("%d", array[k]);
        }
        printf("\n");
    }

    // Display result of sorting
    printf("\n Sorted list is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    
}

