// C program for transpose of matrix
#include<stdio.h>
int main()
{
    int matrixA[3][3];
    int matrixB[3][3];
    int transpose;
    int i, j;

    // input and store element in matrix
    printf(" Enter 9 element in matrix : ");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrixA[i][j]);

    // Display Matrix
    printf("\n Given matrix is \n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrixA[i][j]);
            
        }
       
    }
    // Transposing matrix
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            matrixB[i][j] = matrixA[j][i];

    // print result of transpose
    printf("\n Transpose of matrix is \n");
    for (i = 0; i < 3; i++) 
    { 
        for (j = 0; j < 3; j++) 
           printf("%d\t", matrixB[i][j]); 
        printf("\n"); 
    } 
    return 0;
}