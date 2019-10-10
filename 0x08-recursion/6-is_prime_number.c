int prime(int n, int x);
#include "holberton.h"

/**
 *
 *
 *
 *
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	else
		return (prime(n, 2));
}

/**
 *
 *
 *
 *
 */

int prime(int n, int x)
{
	if (n % x == 0 && n != x)
	{
		return(0);
	}
	else if (x < n)
	{
		return (prime(n, x + 1));
	}
	else if (n == x)
	{
		return (1);
	}
	return (1);
}
