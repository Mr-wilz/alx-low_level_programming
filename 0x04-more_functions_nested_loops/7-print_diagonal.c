#include "main.h"
/**
 * print_diagonal - program function that prints a diagonal
 * @n: number of times diagonal should be printed
 * Return: Void (Success)
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
