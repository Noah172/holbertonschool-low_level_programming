#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
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
		return(v);
	}

}
