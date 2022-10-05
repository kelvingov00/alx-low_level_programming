#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: content copied
 * @src: source of data
 * @n: memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	k = 0;
	while (k < n)
	{
		*(dest + k) = *(src + k);
		k++;
	}
	return (dest);
}
