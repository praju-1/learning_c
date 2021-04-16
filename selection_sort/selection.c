// C program for selection sort
#include<stdio.h>
#define MAX 20

int main()
{
    int array[MAX];
    int i, j, k, n;
    int temp;
    int smallest;

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

    // selection sort
    for (i = 0; i < n-1 ; i++)
    {
        // find smallest element
        smallest = i;
        for (k = i+1; k < n; k++)
        {
            if(array[smallest] > array[k])
                smallest = k;
        }

        if(i != smallest)
        {
            temp = array[i];
            array[i] = array[smallest];
            array[smallest] = temp;
        }
        printf("\n After Pass %d elements are : ", i+1);
        for (j = 0; j < n; j++)
        {
            printf("%d", array[j]);
        }
    }
    // display sorted list
    printf("\nSorted list is : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

}