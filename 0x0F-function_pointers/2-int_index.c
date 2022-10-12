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

	if (array && cmp)
	{
		for (k = 0; k < size; k++)
		{
			if (cmp(array[k]) != 0)
				return (i);
		}
	}
	return (-1);
}
