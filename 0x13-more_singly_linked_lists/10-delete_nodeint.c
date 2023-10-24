#include "lists.h"
/**
 * delete_nodeint_at_index - Del a node at a designated index
 * Author: kingsley
 * @head: Pointer to the beginning of the list
 * @index: Index of the node to be freed
 * Return: 1 if susccessful, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;
	listint_t *tall;
	listint_t *node;

	tall = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (m = 0; m < index - 1 && tall != NULL && index != 0; m++)
		tall = tall->next;
	if (tall == NULL)
		return (-1);
	if (index == 0)
	{
		node = tall->next;
		free(tall);
		*head = node;
	}
	else
	{
		if (tall->next == NULL)
			node = tall->next;
		else
			node = tall->next->next;
		free(tall->next);
		tall->next = node;
	}
	return (1);
}
