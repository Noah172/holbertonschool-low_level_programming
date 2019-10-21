#ifndef DOGHEADER
#define DOGHEADER
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - take data of a doggo
 * @name: name of the doggo
 * @age: how old is the doggo
 * @owner: who keeps alive the doggo
 *
 * Description: take 3 data from a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
