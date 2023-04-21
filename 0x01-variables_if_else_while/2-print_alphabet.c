#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always (0) success
 *
 */

int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
