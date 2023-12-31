#include "main.h"
int _strcmp(char *s1, char *s2);
/**
 * _strstr - locate a substring
 * Author: kingsley
 * @haystack: string to look in
 * @needle: string to locate
 * Return: A pointer to the beginning of the substring,
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
		return (NULL);
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if (*haystack == needle[0])
		{
			if (_strcmp(haystack, needle))
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}

/**
 * _strcmp - compares two strings
 * Author: kingsley
 * @s1: First string
 * @s2: Second string
 * Return: It returns an integer less than, equal to, or greater
 *  to match
 */
int _strcmp(char *s1, char *s2)
{
	int m;
	int length;

	for (length = 0; s2[length] != '\0'; length++)
	{}

	for (m = 0; m < length; m++)
	{
		if (s1[m] != s2[m])
			return (0);
	}

	return (1);
}
