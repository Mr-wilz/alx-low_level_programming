#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function initializes a variable of type struct dog.
 * @d: structure of dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: void (Success)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
