#include <stdlib.h>
#include "dog.h"
/**
*_strcpy - function to copy an string
*@dest: name of the pointer
*@src: name of the pointer
*Return: what is inside *dest
*/

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
		dest[x] = '\0';

return (dest);
}

/**
 * new_dog - function to create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new pointer with the new structure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;
	char *new_name;
	char *new_owner;
	float new_age;
	int len_name, len_owner;

	len_name = sizeof(name);
	len_owner = sizeof(owner);

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	return (NULL);

	new_name = malloc((len_name - 1) * sizeof(char));

	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = malloc((len_owner - 1) * sizeof(char));

	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_name, name);
	_strcpy(new_owner, owner);
	new_age = age;

	new_dog->name = new_name;
	new_dog->owner = new_owner;
	new_dog->age = new_age;

return (new_dog);
}
