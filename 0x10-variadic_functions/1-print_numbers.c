#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers -  print numbers
 * @separator: string to be printed
 * @n: no of ints
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int k;

	va_start(valist, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && k < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
