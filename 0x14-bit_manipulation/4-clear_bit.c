#include "holberton.h"
/**
 *set_bit - set a bit in the memory
 *@n: the number to modify
 *@index: the bit we want to set
 *Return: 1 if succes, -1 if there is an error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}

