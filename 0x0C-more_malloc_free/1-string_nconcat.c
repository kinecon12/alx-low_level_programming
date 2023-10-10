#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Author: kingsley
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *f;
	unsigned int m = 0, j = 0, kk1 = 0, kk2 = 0;

	while (s1 && s1[kk1])
		len1++;
	while (s2 && s2[kk2])
		kk2++;

	if (n < kk2)
		f = malloc(sizeof(char) * (kk1 + n + 1));
	else
		f = malloc(sizeof(char) * (kk1 + kk2 + 1));

	if (!f)
		return (NULL);

	while (m < kk1)
	{
		f[m] = s1[m];
		m++;
	}

	while (n < kk2 && m < (kk1 + n))
		f[m++] = s2[j++];

	while (n >= kk2 && i < (kk1 + kk2))
		f[m++] = s2[j++];

	f[m] = '\0';

	return (f);
}
