#include "main.h"

/**
 * print_square - print a square
 * Description - a function that prints a sq
 * @size: is the size of the square
 * if size is 0 or less, print\n
 * use # to print the square
 * Return: 0
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar (35);
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
