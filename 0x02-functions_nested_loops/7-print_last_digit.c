#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: function parameter
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
