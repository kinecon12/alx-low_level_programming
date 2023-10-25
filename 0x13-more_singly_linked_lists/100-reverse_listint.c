#include "lists.h"
/**
 * reverse_listint - Reverses a singly linked ls
 * Author: kingsley
 * @head: pointer to the first element of the reversed ls
 * Return: A pointer to the first element of the reversed ls
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tall;
	listint_t *add_tmp;

	if (head == NULL || *head == NULL)
		return (NULL);
	tall = *head;
	*head = tall->next;
	tall->next = NULL;

	while (1 && *head != NULL)
	{
		add_tmp = (*head)->next;
		(*head)->next = tall;
		tall = *head;
		if (add_tmp == NULL)
			return (*head);
		*head = add_tmp;
	}
	if (*head == NULL)
	{
		*head = tall;
		return (*head);
	}
	return (NULL);
}
