#include "main.h"

/**
 * leet - encodes a string
 * Description - a function that encodes a string
 * @s: input value
 * Return: s
 */

char *leet(char *s)
{
	int b, c;
	char string1[] = "aAeEoOtTlL";
	char string2[] = "4433007711";

	for (b = 0; s[b] != '\0'; b++)
	{
		for (c = 0; c < 10; c++)
		{
			if (s[b] == string1[c])
			{
				s[b] = string2[c];
			}
		}
	}
	return (s);
}
