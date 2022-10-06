#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array
 * @min: min value
 * @max: max value
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (!ptr)
		return (NULL);
	for (i = 0; (min + i) <= max; i++)
		ptr[i] = (min + i);
	return (ptr);
}
