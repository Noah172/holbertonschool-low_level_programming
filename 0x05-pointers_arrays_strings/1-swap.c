#include "holberton.h"

/**
 *swap_int - is the function that swap the values of the variables
 *
 *@a: is the variable 1
 *@b: is the variable 2
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
