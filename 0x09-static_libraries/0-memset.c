#include "main.h"

/**
 * _memset - fills memory with a const byte
 * @s: pointer
 * @b: value
 * @n: bytes
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
