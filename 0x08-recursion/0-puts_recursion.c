#include "main.h"

/**
 * _puts_recursion - program entry point
 * @s: param
 *
 * Return: 1 (success) or -1 for erroe
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
