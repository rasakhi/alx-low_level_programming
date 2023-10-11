#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: the struct dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int i, name_length, owner_length;

	newdog = malloc(sizeof(*newdog));
	if (newdog == NULL || !(name) || !(owner))
	{
		free(newdog);
		return (NULL);
	}
	for (name_length = 0; name[name_length]; name_length++)
		;
	for (owner_length = 0; owner[owner_length]; owner_length++)
		;
	newdog->name = malloc(name_length + 1);
	newdog->owner = malloc(owner_length + 1);
	if (!(newdog->name) || !(newdog->owner))
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < name_length; i++)
		newdog->name[i] = name[i];
	newdog->name[i] = '\0';
	newdog->age = age;
	for (i = 0; i < owner_length; i++)
		newdog->owner[i] = owner[i];
	newdog->owner[i] = '\0';
	return (newdog);
}
