#include <stdio.h>
#include "main.h"

/**
 * main - print  number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Author: kingsley
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore our first argv*/
	printf("%d\n", argc - 1);

	return (0);
}
