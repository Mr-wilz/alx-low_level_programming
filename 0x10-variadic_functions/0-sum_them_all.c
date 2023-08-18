#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - funtion that returns sum of all its parameters
 * @n: number of args to be passed
 * @...: 2nd function parameter
 * Return: 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int m;

	unsigned int addNum = (0);

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			addNum += va_arg(ap, int);
		}
	}

	va_end(ap);

	return (addNum);
}
