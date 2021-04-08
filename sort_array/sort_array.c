// C program for Sort Array in Ascending Order and descending order
#include<stdio.h>
int main()
{
    int array[10];
    int i, j;
    int p,q;
    int n;
    int temp, temp1;

    printf(" How many number you want enter in an array : ");
    scanf("%d", &n);

    // Input and store element into array
    printf(" Enter number into array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Sorting in Ascending Order
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++) 
        { if(array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    
    // Print array in ascending order
    printf("Ascending order of an array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",array[i]);
    }
    
    // Sorting array in decending order
    for(p=0;p<n;p++)
    {
        for(q=p+1;q<n;q++)
        {
            if(array[p]<array[q])
            {
                temp1=array[p];
                array[p]=array[q];
                array[q]=temp1;
            }
        }
    }
    
    // print descending order
    printf("\nDescending order of an array : \n");
    for(p=0;p<n;p++)
    {
        printf("%d ",array[p]);
    }
    printf("\n");
    return 0;
}