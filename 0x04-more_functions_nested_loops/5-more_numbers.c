#include "main.h"

/**
 * more_numbers - print numbers
 * Description - print numbers 0 to 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
	int n, n1, n2, result;

	n = 0;
	result = 0;

	while (n < 10)
	{
		while (result <= 14)
		{
			if (result < 10)
			{
				n2 = result;
			}
			else
			{
				n1 = result / 10;
				n2 = result % 10;
				_putchar (n1 + '0');
			}
			_putchar (n2 + '0');
			result++;
		}
		n++;
		result = 0;
		_putchar ('\n');
	}
}
