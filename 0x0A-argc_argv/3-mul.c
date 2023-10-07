#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Author: kingsley
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int q, z, n, len, k, digit;

	q = 0;
	z = 0;
	n = 0;
	len = 0;
	k = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (q < len && k == 0)
	{
		if (s[q] == '-')
			++z;

		if (s[q] >= '0' && s[q] <= '9')
		{
			digit = s[q] - '0';
			if (z % 2)
				digit = -digit;
			n = n * 10 + digit;
			k = 1;
			if (s[q + 1] < '0' || s[q + 1] > '9')
				break;
			k = 0;
		}
		q++;
	}

	if (k == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int re, No1, No2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	No1 = _atoi(argv[1]);
	No2 = _atoi(argv[2]);
	re = No1 * No2;

	printf("%d\n", re);

	return (0);
}
