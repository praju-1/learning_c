// C program to Check Two Matrices are Equal or Not
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int matA[10][10];
    int matB[10][10];
    int i, j;
    int row1, row2;
    int column1, column2;
    int flag = 1;

    printf(" Enter the order of the matrix A \n");
    scanf("%d %d", &row1, &column1);

    printf(" Enter the order of the matrix B \n");
    scanf("%d %d", &row2, &column2);

    // input and store element in matrix A
    printf(" Enter the element of matrix A : ");
    for (i = 0; i < row1; i++)
        for (j = 0; j < column1; j++)
            scanf("%d", &matA[i][j]);

    // input and store element in matrix B
    printf(" Enter the element of matrix B : ");
    for (i = 0; i < row2; i++)
        for (j = 0; j < column2; j++)
            scanf("%d", &matB[i][j]);

    // Display Matrix A
    printf("\n Given matrix A is\n");
    for (i = 0; i < row1; i++)
    {
        printf("\n");
        for (j = 0; j < column1; j++)
        {
            printf("%d\t", matA[i][j]);
            
        }
    }
    
    // Display Matrix B
    printf("\n Given matrix B is \n");
    for (i = 0; i < row2; i++)
    {
        printf("\n");
        for (j = 0; j < column2; j++)
        {
            printf("%d\t", matB[i][j]);
            
        }
       
    }
    printf("\n");
    // Comparing two matrix for equality
    if (row1 == row2 && column1 == column2)
    {
        printf(" Matrix can be compared");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column2; j++)
            {
                if (matA[i][j] != matB[i][j])
                {
                    flag = 0;
                    break;
                }
            }
        }
    }        
    else
    {
        printf(" Cannot be compared\n ");
        exit(1);
    }

    if (flag == 1)
        printf("\nTwo matrices are equal \n");
    else
        printf("\nBut, two matrices are not equal \n");
    return 0;
}