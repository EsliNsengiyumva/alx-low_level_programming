#include "main.h"
/**
 * _isalpha function- tests whether a character is from the English alphabet.
 * @j: index  to be checked.
 * Return: 1 if this index indicated the character find in English character.
 * 0 if the character is not an English character.
 */
int _isalpha(int j)
{
	if ((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z'))
		return (1);
	else
		return (0);

}
