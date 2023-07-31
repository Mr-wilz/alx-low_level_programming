#include "main.h"
/**
 * swap_int - function that swaps two integers
 * @a: function parameter 1
 * @b: second function parameter 2
 * Return: void (Success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
