#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * Author: kingsley
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs2;
	char *strings1;
	unsigned int index;

	va_start(strs2, n);

	for (index = 0; index < n; index++)
	{
		strings1 = va_arg(strs2, char *);

		if (strings1 == NULL)
			printf("(nil)");
		else
			printf("%s", strings1);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strs2);
}
