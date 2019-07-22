#ifndef STRUCTDOG
#define STRUCTDOG

/**
 * struct dog - structure about my dog
 * @name: name of my dog
 * @age: age of my dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);
#endif
