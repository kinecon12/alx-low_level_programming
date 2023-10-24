#include "lists.h"

/**
 * listint_len - Cal the len of ls
 * Author: kingsley
 * @h: Pointer to the begining of the list
 * Return: Returns the amount of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int sum;

	if (h == NULL)
		return (0);
	for (sum = 0; h != NULL; sum++)
		h = h->next;
	return (sum);
}
