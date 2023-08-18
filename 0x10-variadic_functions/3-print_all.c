#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: list of arguments types
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int j = 0;

	char *strn, *spt = "";/*separator*/

	va_list args;

	va_start(args, format);

	if (format != NULL)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", spt, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", spt, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", spt, va_arg(args, double));
					break;
				case 's':
					strn = va_arg(args, char *);
					if (strn == NULL)
						strn = "(nil)";
					printf("%s%s", spt, strn);
					break;
				default:
					++j;
					continue;
			}
			spt = ", ";
			++j;
		}
	}
	printf("\n");
	va_end(args);
}
