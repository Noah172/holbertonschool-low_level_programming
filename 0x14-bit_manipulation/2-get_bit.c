#include "holberton.h"
/**
 *get_bit - give the bit solicited of a number
 *@n: the number 
 *@index: the bit solicited
 *Return: the bit or -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n || index)
		return (n >> index & 1);
	return (-1);
}
