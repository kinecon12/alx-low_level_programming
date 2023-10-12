#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Author: kingsley
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int p, sum = 0;
	va_list ot;

	va_start(ot, n);

	for (p = 0; p < n; p++)
		sum += va_arg(ot, int);

	va_end(ot);

	return (sum);
}
