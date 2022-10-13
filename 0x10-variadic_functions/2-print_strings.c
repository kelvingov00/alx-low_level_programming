#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -  prints strings
 * @separator: printed btwn strings
 * @n: no of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int k;
	char *arg;

	va_start(valist, n);

	for (k = 0; k < n; k++)
	{
		arg = va_arg(valist, char *);
		if (arg)
			printf("%s", arg);
		else
			printf("%p", arg);
		if (separator && k < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
