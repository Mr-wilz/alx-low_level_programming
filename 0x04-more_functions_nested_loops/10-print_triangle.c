#include "main.h"

/**
 * print_triangle - function that prints triangle
 * @size: function parameter
 * Return: 0 always (Success)
 */

void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = size - x; y > 1; y--)
			{
				_putchar(32);
			}
			for (z = 0; z <= x; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}

}
