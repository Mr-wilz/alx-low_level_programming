#include "main.h"

/**
 * set_bit - function that sets bit value to 1 at any index
 * @n: number to be set
 * @index: bit index to be set
 * Return: 1 on success, -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | (1 << index);
		return (1);
}
