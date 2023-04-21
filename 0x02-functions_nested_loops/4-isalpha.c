#include "main.h"
/**
 * _isalpha - entry point into the program 
 *
 * @parameter: (int c)
 *
 * Return: 0 or 1
 *
 */


int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 67 && c <= 90))
		return (1);
	else
		return (0);
}
