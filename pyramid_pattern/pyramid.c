/* Write a program to print a simple triangle of asterisks. */
#include <stdio.h>

int main()
{
	int i, j;

	for(i = 1; i <= 10; i = i + 1)
		{
		for(j = 1; j <= i; j = j + 1)
			printf("*");
		printf("\n");
		}

	return 0;
}
