#include "main.h"

/**
 * _isupper - uppercase letters
 * @p: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int p)
{
	if (p >= 'A' && p <= 'Z')
		return (1);
	else
		return (0);
}
