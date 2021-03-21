// C Program to Calculate Average Using Arrays
#include<stdio.h>
int main()
{
    int arr[5], i, n, sum = 0, average;

    printf(" How many number you want to enter : ");
    scanf("%d", &n);

    // taking input and storing it in an array
    for(i=0; i<n; ++i)
    {
        printf("Enter number%d: ",i+1);
        scanf("%d", &arr[i]);
          
        // adding integers entered by the user to the sum variable
        sum += arr[i];
    }
    average = sum/n;
    printf("Average = %d\n", average);

    return 0;
}