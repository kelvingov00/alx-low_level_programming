#include "lists.h"

/**
 * free_list - free memory allocated
 * @head: ptr to linked list
 *
 * Description: a function that frees a list
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	if (head == NULL)
		return;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
