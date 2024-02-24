#include "main.h"
/**
 * sqrt_a - Main Entry
 * @m: input
 * @n: input
 * Return: 0
 */
int sqrt_a(int m, int n)
{
	if (n * n  == m)
	{
		return (n);
	}
	else if (n * n > m)
	{
		return (-1);
	}
	return (sqrt_a(m, n + 1));
}

/**
 * _sqrt_recursion - Main Entry function
 * @n: input to check
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
