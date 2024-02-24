#include "main.h"
/**
 * prime_a - recursive function that checks prime numbers
 * @m: number to be checked
 * @n: input
 * Return: 0 always returns success
 */
int prime_a(int m, int n)
{
	if (m <= 1 || (m != n && m % n == 0))
	{
		return (0);
	}
	else if (m == n)
	{
		return (1);
	}
	return (prime_a(m, n + 1));
}

/**
 * is_prime_number - function to check if number if prime
 * @n: input
 * Return: 0
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
