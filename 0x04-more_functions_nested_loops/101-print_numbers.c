#include "holberton.h"

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(n + '0');
	}
	else
	{
		_putchar(n + '0');
	}
}
