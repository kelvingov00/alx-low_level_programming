#include <stdio.h>
#include <math.h>

/**
 * main - print prime factor
 * Description - a program that prints
 * Return: 0
 */

int main(void)
{
	long pf, lpf;
	long number = 612852475143;
	double square = sqrt(number);

	for (pf = 1; pf <= square; pf++)
	{
		if (number % pf == 0)
		{
			lpf = number / pf;
		}
	}
	printf("%ld\n", lpf);
	return (0);
}
