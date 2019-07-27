/**
*free_dog - to free structure dog
*@d: pointer to my structure dog
*return: always 0, success
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

