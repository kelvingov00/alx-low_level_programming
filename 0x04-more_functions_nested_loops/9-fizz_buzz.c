#include "main.h"
#include <stdio.h>

/**
 * main - print numbers
 * Description -  a program that prints numbers 1 to 100
 * for multiples of 3, print Fizz
 * for multiples of 5, print Buzz
 * for multiples of 3 and 5, print FizzBuzz
 * Return: 0
 */

int main(void)
{
	int b;

	for (b = 1; b <= 100; b++)
	{
		if (b % 3 == 0 && b % 5)
		{
			printf("Fizz");
		}
		else if (b % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (b % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", b);
		}
		if (b != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
