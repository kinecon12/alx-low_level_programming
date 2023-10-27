#include <stdio.h>
/**
 * get_endianness - Chks d sys Byte order
 * Author: kingsley
 * Return: Returns 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	int p;
	int small_large;

	p = 1;
	small_large = (int) (((char *)&p)[0]);
	return (small_large);
}
