#include "holberton.h"

/**
 *_isupper - the function that check for a uppercase lether
 *@c: is the variable to check
 *
 *Return: it varies, give a 1 in case of uppercase of c and 0 if otherwise
 */
int _isupper(int c)
{
	int l = c;

	if (l >= 65 && l <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
