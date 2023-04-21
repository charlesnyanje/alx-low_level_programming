#include "main.h"

/**
 * _strcpy - entry point into the function
 * @dest: function parameter
 * @src: function parameter
 *Return: destination
 */
char *_strcpy(char *dest, char *src)
{
int b;

for (b = 0; src[b]; b++)
{
dest[b] = src[b];
}
dest[b] = src[b];
return (dest);
}
