#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for an int
 * @array: array
 * @size: size
 * @cmp: ptr to compare
 * Return: index of first element
 * or -1 if for no match or neg size
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]) != 0)
			return (k);
	}
	return (-1);
}
