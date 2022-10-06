#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concat two strings
 * @s1: string 1
 * @s2: string 2
 * @n: no of bytes
 * Return: pointer to string or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int k, len1, len2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (len1 = 0; *(s1 + len1); len1++)
		;
	for (len2 = 0; *(s2 + len2); len2++)
		;
	if (len2 < n)
		n = len2;
	ptr = malloc((len1 + n + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	for (k = 0; k < (len1 + n); k++)
	{
		if (k < len1)
			ptr[k] = s1[k];
		else
			ptr[k] = s2[k - len1];
	}
	ptr[k] = '\0';
	return (ptr);
}
