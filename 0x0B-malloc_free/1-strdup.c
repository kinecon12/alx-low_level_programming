#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
*/
char *_strdup(char *str)
{
	char *qq;
	int o, r = 0;

	if (str == NULL)
		return (NULL);
	o = 0;
	while (str[o] != '\0')
		o++;

	qq = malloc(sizeof(char) * (o + 1));

	if (qq == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		qq[r] = str[r];

	return (qq);
}
