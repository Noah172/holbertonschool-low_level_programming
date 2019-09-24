#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @v: is the variable
 * Return: 1 lowercase and 0 to lowercase
 */
int _abs(int v)
{
	if (v < 0)
	{
		int a;

		a = v * -1;

		return (a);
	}
	else
	{
		return (v);
	}

}
