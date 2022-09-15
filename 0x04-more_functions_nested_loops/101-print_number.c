#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * Description - a function that prints
 * @n: the int to be printed
 * Return: 0
 */

void print_number(int n)
{
	unsigned int b;

	if (n < 0)
	{
		b = -n;
		_putchar('-');
	}
	else
	{
		b = n;
	}
	if (b / 10)
	{
		print_number(b / 10);
	}
	_putchar((b % 10) + '0');
}
