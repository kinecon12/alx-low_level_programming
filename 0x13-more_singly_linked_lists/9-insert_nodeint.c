#include "lists.h"
listint_t *crt_nw_node(int n);
/**
 * insert_nodeint_at_index - Inserts a node at a given index
 * Author: Kingsley
 * @head: Pointer to the first element of the list
 * @idx: Index to insert a node at
 * @n: number to be inserted into the node
 * Return: The address of the newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tall;
	listint_t *tall_old;
	listint_t *add_node;

	tall = *head;
	if (head == NULL)
		return (NULL);
	add_node = crt_nw_node(n);
	if (add_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = add_node;
		return (add_node);
	}

	if (idx == 0)
		*head = add_node;
	for (i = 0; i < idx - 1 && tall != NULL && idx != 0; i++)
		tall = tall->next;
	if (tall == NULL)
		return (NULL);
	if (idx == 0)
		add_node->next = tall;
	else
	{
		tall_old = tall->next;
		tall->next = add_node;
		add_node->next = tall_old;
	}
	return (add_node);
}

/**
 * create_new_node - Crt a new node
 * Author: kingsley
 * @n: Value to add to new node
 * Return: A pointer to a node
 */
listint_t *crt_nw_node(int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	add_node->next = NULL;

	return (add_node);
}
