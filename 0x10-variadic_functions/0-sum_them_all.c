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

	unsigned int i;
	int sum = 0;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}

	va_end(ap);

	return (sum);

}
