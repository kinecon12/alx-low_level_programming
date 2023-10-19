#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* _strlen - function that returns the length of a lateral string.
* Author: kingsley
* @s : s is a character
* Return: value is i
*/
int _strlen(const char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		p++;
	}
	return (p);
}

/**
* add_node -  new node at beginning of a list_t list.
* @head: head declared for list_t list.
* Author: kingsley
* @str:  insert into element.
* Return: the number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *sum;

	sum = malloc(sizeof(list_t));
	if (sum == NULL)
		return (NULL);
	sum->str = strdup(str);

	sum->len = _strlen(str);
	sum->next = *head;
	*head = sum;
	return (sum);
}
