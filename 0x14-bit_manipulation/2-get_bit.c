#include "holberton.h"
/**
 *
 *
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n || index)
		return (n >> index & 1);
	return (-1);
}
