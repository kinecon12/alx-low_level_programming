#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **kin;
	int x, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	kin = malloc(sizeof(int *) * height);

	if (kin == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		kin[x] = malloc(sizeof(int) * width);

		if (kin[x] == NULL)
		{
			for (; x >= 0; x--)
				free(kin[x]);

			free(kin);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
			kin[x][z] = 0;
	}

	return (kin);
}
