#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concats two strings
 * @s1: first string
 * @s2: second string
 * @n: number of s2
 * Return: pointer to new space in memory or null
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	int num = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
		num = num + 1;
	}

	ptr = malloc(sizeof(*ptr) * (num + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (b = 0; s1[b] != '\0'; b++)
	{
		ptr[b] = s1[b];
	}
	for (c = 0; s2[c] != '\0' && c < n; c++, b++)
	{
		ptr[b] = s2[c];
	}
	ptr[b] = '\0';
	return (ptr);
}
