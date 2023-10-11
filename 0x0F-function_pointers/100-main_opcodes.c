#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Author: kingsley
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *prt;
	int byts, m;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byts = atoi(argv[1]);

	if (byts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	prt = (char *)main;

	for (m = 0; m < byts; m++)
	{
		if (m == byts - 1)
		{
			printf("%02hhx\n", prt[m]);
			break;
		}
		printf("%02hhx ", prt[m]);
	}
	return (0);
}
