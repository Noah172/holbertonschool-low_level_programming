#include "variadic_functions.h"
/**
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pri;
	unsigned int c;

	va_start(pri, n);

	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(pri, int));
		if (c != n - 1 && separator != NULL)
		printf("%s", separator);
	}
	va_end(pri);
	putchar('\n');
}
