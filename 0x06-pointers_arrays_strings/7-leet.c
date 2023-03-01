#include "holberton.h"

/**
 * leet - Write a function that encodes a string into 1337
 *
 * @changed: This is the input string
 *
 * Return: String converted to 1337
 */

char *leet(char *changed)
{
	int index, j;
	char minuscure[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char majuscure[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};

	for (index = 0; changed[index] != '\0'; ++index)
	{
		for (j = 0; j < 5; j++)
		{
			if (changed[index] == minuscure[j] || changed[index] == majuscure[j])
			{
				changed[index] = numbers[j];
			}
		}
	}
	return (changed);
}

