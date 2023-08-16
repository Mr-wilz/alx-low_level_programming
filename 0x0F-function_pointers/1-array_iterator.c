#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * @array: the array distribution
 * @size: size of the array
 * @action: pointer to the needed function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
