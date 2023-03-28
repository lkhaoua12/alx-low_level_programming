#include "main.h"
/**
 * main - Entry point
 * 
 * Description: 'the program's description'
 * @parameter: describe the parameter
 * 
 * Return: Always 0 (Success)
 */



void print_array(int *a, int n)
{
	int i;
	
	if (n <= 0)
	;
	else
	{
		for (i = 0; i < n - 1; i++)	
		{
			printf("%d, ", a[i]);
		}
		printf("%d", a[n - 1]);
		
	}
	printf("\n");

}
