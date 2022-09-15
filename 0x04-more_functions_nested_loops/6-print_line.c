#include "main.h"

/**
 * print_line - draws a line
 * Description - a function that draws a line
 * @n: the int to be printed
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar (95);
		}
		_putchar ('\n');
	}
	else
	{
		_putchar ('\n');
	}
}
