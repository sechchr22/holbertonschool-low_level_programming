#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - to initialize a variable of type struct dog
 * @d: pointer to dog structure
 * @name: char pointer
 * @age: int
 * @owner: char pointer
 * Return: 0 always succes
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
