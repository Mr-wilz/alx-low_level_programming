#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);
size_t print_list(const list_t *h);

typedef struct my_list
{
	char *string
	unsigned int length;
	struct my_list *nxt;
} list_t;

#endif

