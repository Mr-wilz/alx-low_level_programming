#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: list separator
 * @n: number of strings to be passed
 * @...: more args
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int p;

	char *strings;

	va_list ap;

	va_start(ap, n);

	for (p = 0; p < n; ++p)
	{
		strings = va_arg(ap, char *);
		if (strings)
		{
			printf("%s", strings);
		}
		else
			printf("(nill)");
		if (p < n - 1 && separator)
		{
			printf("%s", separator);
		}
		else if (separator == NULL)
		{
			return;
		}
	}
	printf("\n");
	va_end(ap);
}
