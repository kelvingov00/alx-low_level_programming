#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - pointer to a new allocated memory
 * @name: pointer to the name of the dog
 * @age: age
 * @owner: owner
 * Description: a function that creates a new dog
 * Return: return dog_t ptr
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLength, ownerLength, k;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);
	nameLength = ownerLength = 0;
	while (name[nameLength++])
		;
	while (owner[ownerLength++])
		;
	d1->name = malloc(nameLength * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (k = 0; k <= nameLength; k++)
		d1->name[k] = name[k];
	d1->age = age;
	d1->owner = malloc(ownerLength * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	for (k = 0; k <= ownerLength; k++)
		d1->owner[k] = owner[k];
	return (d1);
}
