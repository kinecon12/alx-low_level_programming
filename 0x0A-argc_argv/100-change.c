#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Author: kingsley
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int nos, m, re;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nos = atoi(argv[1]);
	re = 0;

	if (nos < 0)
	{
		printf("0\n");
		return (0);
	}

	for (m = 0; m < 5 && nos >= 0; m++)
	{
		while (nos >= coins[m])
		{
			re++;
			nos -= coins[m];
		}
	}

	printf("%d\n", re);
	return (0);
}
