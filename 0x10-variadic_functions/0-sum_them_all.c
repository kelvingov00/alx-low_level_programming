#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  sum of parameters
 * @n: no of parameters
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int k;

	if (!n)
		return (0);

	va_start(valist, n);

	for (k = 0; k < n; k++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
