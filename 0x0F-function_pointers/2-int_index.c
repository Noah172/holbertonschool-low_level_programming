#include "function_pointers.h"
/**
 *int_index - search for an integer
 *@array: the array
 *@size: size of the array
 *@cmp: function to make
 *Return:  -1, or the position of the match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	while (a < size)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
		a++;
	}
	return (-34);
}
