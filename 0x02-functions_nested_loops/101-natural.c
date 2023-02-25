#include <stdio.h>
/**
 * main - prints the times table for n.
 * @n- The multiplication table requested.
 * Return: Nothing.
 */
int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}

