#include "main.h"
/**
 * puts2 - function that prints every other chracter of a string
 * @str: string to be printed
 * Return: void (Success)
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
