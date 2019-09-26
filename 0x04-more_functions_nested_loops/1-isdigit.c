#include "holberton.h"

/**
 *_isdigit - check if the variable is a digit or not
 *@c: is the variable
 *
 *Return: it varies if is digit the return 1 and otherwise return 0
 */

int _isdigit(int c)
{
	int n = c;

	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
