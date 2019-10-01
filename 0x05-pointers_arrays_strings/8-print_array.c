#include "holberton.h"
#include <stdio.h>
/**
 * print_array - check the code for Holberton School students.
 * @a: pointer int type
 * @n: is a int variable
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{

		j = *(a + i);

		printf("%d", j);

			if (i != n - 1)
				printf(", ");
	}

printf("\n");
}
