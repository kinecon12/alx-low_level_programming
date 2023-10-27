#include "main.h"

/**
 * binary_to_uint - Convert bin num to an unsigned integer\
 * Author: kingsley
 * @b: Str represent a bin num
 * Return: The converted num or 0 if b is NULL or if there are chars
 * that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	unsigned int nn;
	unsigned int j;
	unsigned int total;
	unsigned int pow;
	int down;

	down = 2;
	total = 0;
	pow = 1;
	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return ((b[0] - 48));
	for (nn = 0; b[nn] != '\0'; nn++)
	{
		if (b[nn] != '0' && b[nn] != '1')
			return (0);
		for (j = length - 1; j > 0; j--)
			pow = pow * down;
		total = total + (pow * (b[nn] - 48));
		length--;
		pow = 1; /*Reseting the exponent*/
	}
	return (total);
}
