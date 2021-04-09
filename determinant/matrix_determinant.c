// C program to find find the determinant of matrix.
#include<stdio.h>
int main()
{
    int mat[3][3];
    int i, j;
    long determinant;

    // input and store element in matrix
    printf(" Enter 9 element in matrix : ");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    // Display Matrix
    printf("\n Given matrix is \n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", mat[i][j]);
            
        }
       
    }
    printf("\n");
    // Calculate determinant
    determinant = mat[0][0] * ((mat[1][1]*mat[2][2]) - (mat[2][1]*mat[1][2])) -mat[0][1] * (mat[1][0]

   * mat[2][2] - mat[2][0] * mat[1][2]) + mat[0][2] * (mat[1][0] * mat[2][1] - mat[2][0] * mat[1][1]);

 

    printf("\nDeterminant of 3X3 matrix: %ld\n", determinant);

    return 0;
} 