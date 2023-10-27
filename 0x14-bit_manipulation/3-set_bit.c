#include"main.h"
#include<stdio.h>
/**
 * set_bit - Sets the val of a bit to 1 at giv index.
 * Author: kingsley
 * @n: Pointer to a number;
 * @index: index to replace in the number
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int luks;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	luks = 1;
	luks = luks << index;
	*n = ((*n) | luks);
	return (1);
}
