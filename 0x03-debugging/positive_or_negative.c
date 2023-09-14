#include "main.h"
/* betty style doc for function main goes there */
/**
 * main - Entry point printing andom number
 *Return: Always 0
 */
void positive_or_negative(int i)
{
	if  (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is Zero\n", i);
}
