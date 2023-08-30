#include "lists.h"

/**
 * my_init - constructor initialization function
 * Return: void
 */

void __attribute__ ((constructor)) my_init(void)
{
	const char *line1 = "You're beat! and yet, you must allow,\n";
	const char *line2 = "I bore my house upon my back!\n";

	printf("%s%s", line1, line2);
}
