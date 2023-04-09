#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j;
	int lenght, base_two;

	if (!b)
		return (0);

	j = 0;

	for (lenght = 0; b[lenght] != '\0'; lenght++)
		;

	for (lenght--, base_two = 1; lenght >= 0; lenght--, base_two *= 2)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
		{
			return (0);
		}

		if (b[lenght] & 1)
		{
			j += base_two;
		}
	}

	return (j);
}
