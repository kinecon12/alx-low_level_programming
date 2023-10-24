#include "lists.h"
/**
 * sum_listint - Calc the Total of the integers in a ls
 * Author: kingsley
 * @head: Pointer to the first element of a list
 * Return: An integer representing the sum of values
 */
int sum_listint(listint_t *head)
{
	int Total;

	Total = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		Total = Total + head->n;
		head = head->next;
	}
	return (Total);
}
