#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints elements of an array of integers
 * @a: function parameter 1 (array of integers to be used)
 * @n: function parameter 2 (number of elements to be printed
 * Return: void (Success)
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
