#include "holberton.h"
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	a =abs (a % 10);
	_putchar(a + '0');
	return (0);
}
