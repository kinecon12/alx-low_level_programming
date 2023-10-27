#include "main.h"
/**
 * clear_bit - sets d val of a bit to 0 at a given index.
 * Author: Kingsley
 * @n: Pointer to a num
 * @index: Index to switch
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int luks;

	luks = 1;
	luks = luks << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1) 
		*n = luks ^ *n;

	return (1);
}
