#include "lists.h"

/**
 * free_list - function that frees a linked list_t list
 * @head: start of node
 * Author: kingsley
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
