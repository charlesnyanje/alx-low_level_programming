#include "main.h"
/**
* wordCounterRec - count num of words recursively
* @str: pointer to char
* @i: current index
* Return: number of words
**/
int wordCounterRec(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + wordCounterRec(str, i + 1));
	return (wordCounterRec(str, i + 1));
}

/**
* word_counter - counts number of words in 1d array of strings
* @str: pointer to char
* Return: number of words
**/

int word_counter(char *str)
{
	if (str[0] != ' ')
		return (1 + wordCounterRec(str, 0));
	return (wordCounterRec(str, 0));
}
/**
* strtow - splits a string into words.
* @str: string to be splitted
* Return: pointer to an array of strings (words) or null
**/
char **strtow(char *str)
{
	char **strDup;
	int a, b, c, words;

	if (str == NULL || str[0] == 0)
		return (NULL);
	words = word_counter(str);
	if (words < 1)
		return (NULL);
	strDup = malloc(sizeof(char *) * (words + 1));
	if (strDup == NULL)
		return (NULL);
	a = 0;
	while (a < words && *str != '\0')
	{
		if (*str != ' ')
		{
			b = 0;
			while (str[b] != ' ')
				b++;
			strDup[a] = malloc(sizeof(char) * (b + 1));
			if (strDup[a] == NULL)
			{
				while (--a >= 0)
					free(strDup[--a]);
				free(strDup);
				return (NULL);
			}
			c = 0;
			while (c < b)
			{
				strDup[a][c] = *str;
				c++, str++;
			}
			strDup[a][c] = '\0';
			a++;
		}
		str++;
	}
	strDup[a] = '\0';
	return (strDup);
}
