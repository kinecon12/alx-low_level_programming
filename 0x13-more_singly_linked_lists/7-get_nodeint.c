#include "lists.h"
/**
 * get_nodeint_at_index - Returns the node at an index
 * Author: kingsley
 * @head: Pointer to the first element of the list
 * @index: Desired node at this position
 * Return: Pointer to the desired node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index ; count++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
