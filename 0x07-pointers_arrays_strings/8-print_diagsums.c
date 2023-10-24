#include <stdio.h>

/**
 * print_diagsums - Adds numbers in a diagonal
 * Author: kingsley
 * @a: array containing characters
 * @size: Size of array levels
 */
void print_diagsums(int *a, int size)
{
	int m;
	int Tor;
	int Tol;

	Tor = 0;
	Tol = 0;
	for (m = 0; m < (size * size);)
	{
		Tor = Tor + a[m];
		m = m + size + 1;
	}
	for (m = 0; m < (size * size) - size;)
	{
		m = m + size - 1;
		Tol = Tol + a[m];
	}
	printf("%d, %d\n", Tor, Tol);
}
