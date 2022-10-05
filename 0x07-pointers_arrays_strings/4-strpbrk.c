#include "main.h"

/**
 * _strpbrk - matches any char specified
 * @s: string
 * @accept: char in string
 * Return: string that matches any char
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (*s == accept[k])
			{
				return (s);
			}
			k++;
		}
		s++;
	}
	return (0);
}
