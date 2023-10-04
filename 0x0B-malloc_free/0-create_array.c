#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: to determine size of array
 * @c: char to assign value
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int k;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		exit(1);

	for (k = 0; k < size; k++)
		s[k] = c;
	return (s);
}
