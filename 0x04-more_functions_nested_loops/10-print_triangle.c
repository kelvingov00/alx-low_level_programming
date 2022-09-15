#include "main.h"

/**
 * print_triangle -  print a triangle
 * Description -  a function that prints a triangle
 * @size: is the size of the triangle
 * if size is 0 or less, print \n
 * @#: the character to print
 * Return: 0
 */

void print_triangle(int size)
{
	int b, c, d, e;

	if (size > 0)
	{
		d = size - 1;
		for (b = 0; b < size; b++)
		{
			for (c = d; c > 0; c--)
			{
				_putchar (' ');
			}
			for (e = 0; e <= b; e++)
			{
				_putchar (35);
			}
			d--;
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
