#include "main.h"

/**
 * print_most_numbers - print numbers
 * Description - prints the numbers from 0 to 9
 * Return: 0
 */

void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		if (n != 2 && n != 4)
		{
			_putchar (n + '0');
		}
		n++;
	}
	_putchar ('\n');
}
