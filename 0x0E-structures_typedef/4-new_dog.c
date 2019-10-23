#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new pupper
 * @name: name of the new pupper
 * @age: age of the new pupper
 * @owner: name of the owner of the new pupper
 * Return: the info of the new pupper
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	int i, j, k, l;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	d->name = malloc(sizeof(char) * i + 1);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	for (k = 0; k < (i + 1); k++)
		d->name[k] = name[k];

	d->age = age;

	d->owner = malloc(sizeof(char) * j + 1);

	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	for (l = 0; l < (j + 1); l++)
		d->owner[l] = owner[l];

	return (d);
}
