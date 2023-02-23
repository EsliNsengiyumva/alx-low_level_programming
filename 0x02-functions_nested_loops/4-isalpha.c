#include "main.h"
/**
 * 4_isalpha.c: print the English alphabet.
 * @j: index  to be checked.
 * Return: 1  index indicated the character found.
 */
int _isalpha(int j)
{
	if ((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z'))
		return (1);
	else
		return (0);

}

