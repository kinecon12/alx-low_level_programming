#include "lists.h"
/**
 * add_nodeint - plus node at the beginning of the ls
 * Author: kingsley
 * @head: pointer to the beginning of ls
 * @n: number to add to a node
 * Return: A pointer to the head of the ls
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	if (head == NULL)
		return (NULL);

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);
	if (*head == NULL)
		add_node->next = NULL;
	else
		add_node->next = *head;
	add_node->n = n;
	*head = add_node;

	return (*head);
}
