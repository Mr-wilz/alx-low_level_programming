#include "main.h"
/**
 * print_numbers - function that prints numbers from 0 to 9
 * _putchar - prototype declaration
 * @c : declared function parameter
 * Return: always 0 (Success)
 */

int _putchar(char c);

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	_putchar(i + '0');
	}
	_putchar('\n');
}
