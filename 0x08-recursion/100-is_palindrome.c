#include "main.h"
/**
 * palindrome2 - obtains length of a
 * @i: string
 * @j: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palindrome2(char *i, int j)
{
	if (*i == 0)
		return (j - 1);
	return (palind2(i + 1, i + 1));
}
/**
 * palindrome3 - compares string vs string reverse
 * @i: string
 * @j: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int palindrome3(char *i, int j)
{
	if (*i != *(i + j))
		return (0);
	else if (*i == 0)
		return (1);
	return (palindrome3(i + 1, j - 2));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	int j;

	j = palindrome2(s, 0);
	return (palindrome3(s, j));
}
