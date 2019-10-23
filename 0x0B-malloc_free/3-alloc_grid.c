#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


int **alloc_grid(int width, int height)
{
	int **greed;
	int a, b;

	if (width < 1 || height < 1)
		return (NULL);

	greed = malloc(height * sizeof(int *));
	if (greed == NULL)
		return (NULL);

	while (a < height)
	{
		greed[a] = malloc(sizeof(int) * width);
		if (greed[a] == NULL)
			for (a = a - 1; a >= 0; a--)
				free(greed[a]);

		free(greed);
		return (NULL);

	a++;
	}

	for (b = 0;b  < height; b++)
		greed[a][b] = 0;


	return (greed);

}
