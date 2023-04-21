#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 **/
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;
	ptr = malloc(sizeof(*ptr) * (size + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
