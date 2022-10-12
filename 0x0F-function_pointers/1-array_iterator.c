#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function
 * @array: array
 * @size: size
 * @action: ptr to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (!array || !action)
		return;

	for (k = 0; k < size; k++)
		action(array[k]);
}
