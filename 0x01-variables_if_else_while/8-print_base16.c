#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always (0) success
 *
 */

int main(void)
{
	int n;

	while (n < 16)
	{
		if (n < 10)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n + 'a' - 10);
		}
		n++;
	}
	putchar('\n');
	return (0);
}

