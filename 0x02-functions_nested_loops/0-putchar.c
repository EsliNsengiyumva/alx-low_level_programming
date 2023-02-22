#include <stdio.h>
/**
 * main -program that prints _putchar, followed by a new line..
 * Return: 0 on success.
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(c[i]);
	}
	putchar('\n');
	return (0);
}
