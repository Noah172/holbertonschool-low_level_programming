#include "holberton.h"

/**
 * _isalpha - Print if is lower or upper case
 *
 * @c: is the representation of char in ascii code
 * Return: 1 lowercase and lowercase and 0 if other case
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
