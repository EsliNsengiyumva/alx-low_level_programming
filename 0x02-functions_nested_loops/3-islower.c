#include "main.h"

/**
 * _islower - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int j)
{
	if (j >= 'a' && j <= 'z')
		return (1);
	else
		return (0);
}

