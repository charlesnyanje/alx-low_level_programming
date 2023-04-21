#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: always (0) success
 *
 */

int main(void)
{
	int x = 65;
	int y = 97;

	while (y <= 122)
	{
		putchar(y);
		y++;
	}
	while (x <= 90)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
