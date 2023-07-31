#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: character to be printed
 * Return: void (Success)
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i]  != '\0'; i++)
		count++;
	for (i = count - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
