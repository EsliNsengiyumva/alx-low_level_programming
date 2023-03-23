#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * @n: The number of items
 *
 * Return: Returns the sum of all its parameters.
 *         If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list ap;

	unsigned int j;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	for (j = 0; j < n; j++)
	{
		sum += va_arg(ap, unsigned int);
	}

	va_end(ap);

	return (sum);

}
