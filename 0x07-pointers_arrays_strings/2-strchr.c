#include "main.h"
/**
 * _strchr - entry point into the program
 *@s: param
 *@c: param
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}

