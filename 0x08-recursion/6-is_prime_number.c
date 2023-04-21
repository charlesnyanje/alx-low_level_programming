#include "main.h"

/**
 * prime2 - program entry point
 * @a: param
 * @b: param
 *
 * Return: 1(success)
 */
int prime2(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime2(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: param
 *
 * Return: 1 (success) -1 (error)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime2(n, 2));
}
