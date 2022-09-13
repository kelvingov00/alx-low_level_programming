#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 * Description - print alphabet
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet - 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
