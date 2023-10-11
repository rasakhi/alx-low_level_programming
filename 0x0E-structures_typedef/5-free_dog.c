#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory for struct dog
 * @d: struct dog
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
