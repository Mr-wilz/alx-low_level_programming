#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: list separator
 * @n: number of integers passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;

	unsigned int nums;

	va_list ap;

	va_start(ap, n);

	for (m = 0; m < n; ++m)
	{
		nums = va_arg(ap, int);

		printf("%d", nums);
		if (m < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
