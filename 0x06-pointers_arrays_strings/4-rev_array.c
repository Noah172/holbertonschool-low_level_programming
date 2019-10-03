#include "holberton.h"

/**
 *reverse_array - function that invert the string
 *@a: is the string
 *@n: the number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, j;

	i = n - 1;
	j = 0;

	while (i > j)
	{
		int tp = a[i];

		a[i] = a[j];
		a[j] = tp;
		i--;
		j++;
	}
}
