#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point printing andom number
 *Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if  (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is Zero", n);
	else
		printf("%d is Negative", n);
	printf("\n");
	return (0);
}
