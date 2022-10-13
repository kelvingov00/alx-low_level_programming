#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list all arguments
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int k = 0, middle = 0;
	char *arg;

	va_start(valist, format);

	while (format && format[k])
	{
		if (middle)
			printf(", ");
		switch (format[k])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				arg = va_arg(valist, char *);
				if (arg)
				{
					printf("%s", arg);
					break;
				}
				printf("%p", arg);
				break;
			default:
				middle = 0;
				k++;
				continue;
		}
		middle = 1;
		k++;
	}
	printf("\n");
	va_end(valist);
}
