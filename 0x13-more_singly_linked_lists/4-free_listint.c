#include "lists.h"
/**
 * free_listint - Frees a list of nodes
 * Author: kingsley
 * @head: Pointer to the first element of the list
 */
void free_listint(listint_t *head)
{
	listint_t *tall;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tall = head->next;
		free(head);
		head = tall;
	}
	free(head);
}
