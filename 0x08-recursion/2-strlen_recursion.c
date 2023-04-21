#include "main.h"

/**
 * _strlen_recursion - program entry point
 * @s: function param
 *
 * Return: success
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
