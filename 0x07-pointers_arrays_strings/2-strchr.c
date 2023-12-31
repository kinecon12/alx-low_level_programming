#include "main.h"
/**
 * _strchr - returns  pointer to the first occurrence of the char c
 * in the string s.
 * Author: Kingsley
 * @c: character
 * @s: string
 * Return: pointer to the first occurence of the character or pointer to null
 * value if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
