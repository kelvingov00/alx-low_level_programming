#include "lists.h"

/**
 * add_node - adds a new node
 * Description: a function that adds a new node
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nch;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nch = 0; str[nch]; nch++)
		;

	new->len = nch;
	new->next = *head;
	*head = new;

	return (*head);
}
