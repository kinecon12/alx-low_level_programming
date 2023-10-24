#include "main.h"
/**
 * _strpbrk - look for a strs for any set of bytes
 * Author: kingsley
 * @s: String to look through
 * @accept: Strs that tells what to look for
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int m;

	for (; *s != '\0'; s++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (*s == accept[m])
				return (s);
		}
	}
	return (NULL);
}
