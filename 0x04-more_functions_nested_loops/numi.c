#include "holberton.h"

void more_numbers(void)
{
	int i;

	for(i = 0 ; i < 15 ; i++)
	{
		_putchar(i + '0');
		if(i >= 10)
		{
			_putchar((i / 10) + '0');
		
		}
	}
	_putchar('\n');
}
