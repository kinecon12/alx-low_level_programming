#include "lists.h"
/**
 * free_listint2 - free ls of nodes, and sets the head to NULL
 * Author: Kingsley
 * @head: Pointer to the first element of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tall;


	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		tall = (*head)->next;
		free(*head);
		*head = tall;
	}
	free(*head);
	*head = NULL;
}
