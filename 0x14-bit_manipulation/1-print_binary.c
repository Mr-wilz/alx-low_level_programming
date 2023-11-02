#include "main.h"

/**
 * print_binary - prints the binary version of a number
 * @n: number to be printed in binary
 *
 * Return: 0 on success.
 */

void print_binary(unsigned long int n)
{
	int b = sizeof(unsigned long int) * 8 - 1;
	int c = 0;


	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (b >= 0)
	{
		unsigned long int bit = n >> b;

		if (bit & 1)
		{
			_putchar('1');
			c = 1;
		}
		else if (c)
		{
			_putchar('0');
		}
		b--;
	}
}
