#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function thatchecks for digits
 * @c: function parameter to check
 * Return: 1 (Success) or 0 (Failure)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
