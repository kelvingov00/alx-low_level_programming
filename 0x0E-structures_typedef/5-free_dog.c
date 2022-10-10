#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -  free the ptr to the memory
 * @d: ptr to struct dog
 *
 * Description: a function that frees dogs
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
