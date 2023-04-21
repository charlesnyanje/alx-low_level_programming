#include "main.h"
/**
 * _memset - entry point into the program
 *@s: param
 *@b: param
 *@n: param
 *
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
