#include "main.h"

/**
 * clear_bit - function that sets value of a bit to 0.
 * @n: pointer to the bit.
 * @index: value index starting from 0.
 *
 * Return: 1 on success, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
