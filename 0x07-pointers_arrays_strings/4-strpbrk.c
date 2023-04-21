#include "main.h"
/**
 * _strpbrk -program entry point
 *@s: param
 *@accept: param
 *
 * Return: char 
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	return ('\0');
}

