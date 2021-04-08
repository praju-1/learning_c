// C program to remove duplicate element from array
#include<stdio.h>
int main()
{
    int arr[10];
    int i, j, k;
    int n;
	
    // Total number of element in array
	printf("\nPlease Enter Number of elements in an array  :   ");
	scanf("%d", &n);
	
	printf("\nPlease Enter %d elements of an Array \n", n);
    // input and store array element
	for (i = 0; i < n; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
    
    // finding duplicate  element and remove
	for (i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			for(k = j; k < n; k++)
    			{
    				arr[k] = arr[k + 1];
				}
				n--;
				j--;
			}
		}
	}

 	printf("\nFinal Array after Deleteing Duplicate Array Elements is:\n");
 	for (i = 0; i < n; i++)
  	{
 		printf("%d\t", arr[i]);
        printf("\n");
  	}	    
 	return 0;
}