#include "main.h"
/**
 * _puts - function that prints a string folloewd by new line
 * @str: function parameter
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
