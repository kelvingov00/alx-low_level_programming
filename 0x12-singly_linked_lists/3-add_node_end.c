#include "lists.h"

/**
 * add_node_end - add to the list end
 * @head: ptr to the linked list
 * @str: ptr to string
 *
 * Description: a function that adds a new node
 * Return: ptr
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *temp;
	size_t l = 0;
	char *n_string = NULL;

	if (head == NULL || str == NULL)
		return (NULL);
	while (str[l] != '\0')
		l++;
	n_string = malloc(sizeof(char) * l);
	if (n_string == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(n_string);
		return (NULL);
	}
	ptr->str = strdup(str);
	ptr->l = l;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = ptr;
	return (*head);
}
