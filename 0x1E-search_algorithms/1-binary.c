#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted
 *                 array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located or -1 if not in the array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, h = 0, i = 0;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		i = l;
		printf("Searching in array: ");
		while (i <= r)
		{
			printf("%d", array[i]);
			if (i != r)
				printf(", ");
			else
				printf("\n");
			i++;
		}
		h = (l + r) / 2;
		if (array[h] == value)
			return (h);
		else if (array[h] > value)
			r = h - 1;
		else
			l = h + 1;
	}
	return (-1);
}
