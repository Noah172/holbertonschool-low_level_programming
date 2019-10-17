#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - function that create an int array
 *@min: minimum value
 *@max: maximum value
 *Return: thwe array of int
 */

int *array_range(int min, int max)
{
	int a, b;
	int *ar;

	if (min > max)
		return (NULL);

	b = max - min;

	ar = malloc((b + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);

	for (a = 0; a <= b; a++)
	{
		ar[a] = min + a;
	}

	return (ar);
}
