#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always (0) success
 *
 */

int main(void)
{
	int b = 97;

	while (b <= 122)
	{
		if (b == 113 || b == 101)
		{
			b++;
			continue;
		}
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
