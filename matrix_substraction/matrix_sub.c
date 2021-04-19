// C program to substract two matrix
#include<stdio.h>
int main()
{
    int matrixA[3][3];
    int matrixB[3][3];
    int subtraction[3][3];
    int i, j;

   // input and store element in matrix A
    printf(" Enter the element of matrix A : ");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrixA[i][j]);

    // input and store element in matrix B
    printf(" Enter the element of matrix B : ");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &matrixB[i][j]);

    // Display Matrix A
    printf("\n Given matrix A is\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrixA[i][j]);
            
        }
    }
    
    // Display Matrix B
    printf("\n Given matrix B is \n");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", matrixB[i][j]);
            
        }
       
    }
    printf("\n");
    // subtraction of matrices
    for(i = 0; i < 3; i++)
  	{
   		for(j = 0; j < 3; j++)
    	{
      		subtraction[i][j] = matrixA[i][j] - matrixB[i][j];    
   	 	}
  	}
    // Display matrix subtraction
 	printf("\n After Subtracting Matrix A from Matrix B = A - B \n");
 	for(i = 0; i < 3; i++)
  	{
   		for(j = 0; j < 3; j++)
    	{
      		printf(" %d \t ", subtraction[i][j]);
    	}
    	printf("\n");
  	}
 	return 0;
}