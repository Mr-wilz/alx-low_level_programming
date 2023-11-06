#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another
 * @n: The number.
 * @m: Number to flip n to.
 * Return: The number of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int bits = 0;

	while (xor > 0)
	{
		bits += xor & 1;
		xor >>= 1;
	}

	return (bits);
}
