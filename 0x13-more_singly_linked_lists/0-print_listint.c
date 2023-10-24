#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * Author: kingsley
 * @h: Pointer to a list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	unsigned int sum;

	if (h == NULL)
		return (0);
	for (sum = 0; h != NULL; sum++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (sum);
}
