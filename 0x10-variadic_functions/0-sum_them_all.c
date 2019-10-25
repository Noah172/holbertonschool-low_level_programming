#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - make an add of numbers
 *@n: the number of args
 *@...: the args
 *Return: the final add
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pepi;
	unsigned int i;
	int s = 0;

	if (n == 0)
		return (0);

	va_start(pepi, n);
	for (i = 0; i < n; i++)
		s += va_arg(pepi, int);

	va_end(pepi);

	return (s);
}
