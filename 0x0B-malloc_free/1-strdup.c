#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer
 * @str: string
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *strDup;
	int i, k;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strDup = malloc(sizeof(*str) * i);
	if (strDup == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
	{
		strDup[k] = str[k];
		k++;
	}
	return (strDup);
}
