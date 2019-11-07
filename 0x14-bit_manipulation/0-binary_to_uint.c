#include "holberton.h"
/**
 *binary_to_uint - convert binary into decimal
 *@b: the binary number in a char array
 *Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, c;

	if (b == NULL) /*looking b contains something*/
		return (0);
	for (c = 0; b[c] != '\0'; c++) /*verifying the sting only have 0 and 1*/
	{
		if (b[c] != 48 && b[c] != 49)
			return (0);

		i = (i * 2) + (b[c] - '0');
	}

	return (i);
}
