#include "main.h"
/**
 * _strchr - Entry point
 * @p: input
 * @s: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *p, char s)
{
	int i = 0;

	for (; p[i] >= '\0'; i++)
	{
		if (p[i] == s)
			return (&p[i]);
	}
	return (0);
}
