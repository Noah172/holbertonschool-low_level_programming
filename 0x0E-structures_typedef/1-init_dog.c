#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct doggo
 * @d: a struct doggo
 * @name: doggo name
 * @age: doggo age
 * @owner: doggo owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
