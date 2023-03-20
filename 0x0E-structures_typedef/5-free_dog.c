#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the space used by struct dog
 * @d: the struct to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
