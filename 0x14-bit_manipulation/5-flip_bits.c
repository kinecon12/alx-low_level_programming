#include "main.h"
/**
 * flip_bits - Returns d num of bits you would need to flip to get
 * Author: kingsley
 * from one number to another.
 * @n: First number to compare
 * @m: Second number to compare
 * Return: the number of bits you would need to flip to get
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int output;
	unsigned long int sum;

	output = n ^ m;
	for (output = 0; sum > 0;)
	{
		if ((output & 1) == 1)
			sum++;
		output = output >> 1;
	}

	return (sum);
}
