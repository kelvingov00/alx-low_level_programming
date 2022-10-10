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
	size_t length_name, length_owner, k, size;
	dog_t *ptr;

	ptr = (dog_t *)malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	length_name = length_owner = 0;
	while (name[length_name++] != '\0')
		;
	while (owner[length_owner++] != '\0')
		;
	ptr->name = malloc(length_name * sizeof(ptr->name));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	size = k = 0;
	while (size++ <= length_name)
		ptr->name[size] = name[size];
	ptr->age = age;
	ptr->owner = malloc(length_owner * sizeof(ptr->owner));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	while (k++ <= length_owner)
		ptr->owner[k] = owner[k];
	return (ptr);
}
