#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 * Author: kingsley
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int cont;

	cont = 0;
	while (cont < strlen(str)) /*count string*/

	{
		if (!isdigit(str[cont])) /*check if str there are digit*/
		{
			return (0);
		}

		cont++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Author: kingsley
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int cont;
	int str_to_int;
	int Total = 0;

	cont = 1;
	while (cont < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[cont]))

		{
			str_to_int = atoi(argv[cont]); /*ATOI --> convert string to int*/
			Total += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		cont++;
	}

	printf("%d\n", Total); /*print sum*/

	return (0);
}
