#include "main.h"
#include <stdio.h>
/**
 * get_bit - Returns a value at a given index
 * Author: kingsley
 * @n: Num to chk the val of
 * @index: The index to look for the num
 * Return: A value at a given index or -1 if an error occours
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m;

	if (index > (sizeof(8) * 8))
		return (-1);

	for (m = 0; m < index; m++)
		n = n >> 1;
	return ((n & 1));
}
