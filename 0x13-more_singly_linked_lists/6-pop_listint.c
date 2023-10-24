#include "lists.h"
/**
 * pop_listint - Del the first element of a ls
 * Author: kingsley
 * @head: pointer to the first node of the list
 * Return: The number inside the node that is deleted
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tall;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tall = *head;
	*head = (*head)->next;
	free(tall);
	return (n);
}
