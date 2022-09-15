#include "main.h"

/**
 * print_diagonal - draw a diagonal
 * Description -  a function that draws a diagonal
 * @n: the int to be print
 * if n is 0 or less, print a \n
 * Return: 0
 */

void print_diagonal(int n)
{
		int b, c;

		if (n > 0)
		{
			for (b = 0; b < n; b++)
			{
				for (c = 0; c < b; c++)
				{
					_putchar (' ');
				}
				_putchar (92);
				_putchar (' ');
			}
		}
		else
		{
			_putchar ('\n');
		}
}
