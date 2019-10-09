#include "holberton.h"

/**
 *factorial -  makes the factorial operation
 *@n: the integer number
 *
 *Return: the result.
 */

int factorial(int n)
{
	if (n == 1)
		return (n);

	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
