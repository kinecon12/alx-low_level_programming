#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to  be allocate
 * Author: kingsley
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptt;

	ptt = malloc(b);

	if (ptt == NULL)
		exit(98);

	return (ptt);
}
