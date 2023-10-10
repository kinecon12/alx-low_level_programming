#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Author: kingsley
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *poi;
	int count, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	poi = malloc(sizeof(int) * size);

	if (poi == NULL)
		return (NULL);

	for (count = 0; min <= max; count++)
		poi[count] = min++;

	return (poi);
}
