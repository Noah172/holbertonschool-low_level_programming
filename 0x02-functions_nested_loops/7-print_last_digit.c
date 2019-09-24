#include "holberton.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the variable
 *
 * @a: is the integer
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	a = abs(a % 10);
	_putchar('0' + a);
	return (a);
}
