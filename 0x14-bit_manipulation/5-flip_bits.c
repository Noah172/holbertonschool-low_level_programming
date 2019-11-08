#include "holberton.h"
/**
 *flip_bits - how much bits need to change
 *@n: an int
 *@m: an int
 *Return: the quantity of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ma = 1;
	unsigned int b = 0;

	if (n == m)
		return (0);

	n = n ^ m;
	ma = ma << 63;

	while (ma != 0)
	{
		if ((n & ma) > 0)
			b++;
		ma = ma >> 1;
	}
	return (b);
}
