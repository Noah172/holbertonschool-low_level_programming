#include "holberton.h"
/**
 *print_binary - convert decimal to binary
 *@n: the decimal number
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, ban = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			putchar(1 + '0');
			ban++;
		}
		else if (ban)
		{
			putchar(0 + '0');
		}
	}
		if (!ban)
			putchar(0 + '0');
}
