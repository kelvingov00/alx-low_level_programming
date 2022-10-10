#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a var of type struct dog
 * @d: array
 * @name: name
 * @age: age
 * @owner: owner
 * Description: a function that initialize a variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
