#include "lists.h"
listint_t *create_node(const int n);

/**
 * add_nodeint_end - Include node at the end of a ls
 * Author: kingsley
 * @head: Pointer to the beginning of a list
 * @n: number to add to the node
 * Return: A pointer to the beginning of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node;
	listint_t *tall;

	tall = *head;
	if (head == NULL)
		return (NULL);

	add_node = create_node(n);
	if (add_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = add_node;
		return (*head);
	}
	while (tall->next != NULL)
		tall = tall->next;
	tall->next = add_node;

	return (*head);
}

/**
 * create_node - Crt new node
 * Author: kingsley
 * @n: Value for the node
 * Return: pointer to the beginning of the ls
 */
listint_t *create_node(const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	add_node->next = NULL;

	return (add_node);
}
