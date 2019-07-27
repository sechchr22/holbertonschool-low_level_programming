#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - to print members of structure
 * @d: pointer to the structure struc dog
 * Return: 0 success
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name == NULL)
	d->name = "(nil)";

	if (d->owner == NULL)
	d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

return;
}

