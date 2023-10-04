#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Author:Kingsley
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *cont;
	int po, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	po = ci = 0;
	while (s1[po] != '\0')
		po++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (po + ci + 1));

	if (cont == NULL)
		return (NULL);
	po = ci = 0;
	while (s1[po] != '\0')
	{
		cont[po] = s1[po];
		po++;
	}

	while (s2[ci] != '\0')
	{
		cont[po] = s2[ci];
		po++, ci++;
	}
	cont[po] = '\0';
	return (cont);
}
