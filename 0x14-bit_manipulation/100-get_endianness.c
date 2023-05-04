#include "main.h"

/**
 * get_endianness - checks the endianness
 * @i: initial variable
 * @j: receiver casting variable
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i;
	char *j;

	i = 1;
	j = (char *) &i;

	return ((int)*j);
}
