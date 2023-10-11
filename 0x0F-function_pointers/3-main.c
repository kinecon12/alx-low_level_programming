#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Author: kingsley
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *pc;
	int kk1, kk2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	kk1 = atoi(argv[1]);
	pc = argv[2];
	kk2 = atoi(argv[3]);

	if (get_op_func(pc) == NULL || pc[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*pc == '/' && kk2 == 0) ||
	    (*pc == '%' && kk2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(pc)(kk1, kk2));

	return (0);
}
