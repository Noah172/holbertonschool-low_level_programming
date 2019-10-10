int prime(int n, int x);
#include "holberton.h"

/**
 *is_prime_number - is the funtion that return the 0
 *@n: is the int var
 *
 *Return: 0 if is not prime and 1 if it is 
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
 *prime - make the operation to see if is a prime number
 *@n: the number we want to know if is prime
 *@x: the divisor to see if n is prime
 *Return: 0 or 1
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
