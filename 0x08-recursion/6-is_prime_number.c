#include "main.h"
/**
 * is_prime_helper - checks for prime helper
 * @n: number
 * @c: incremented to n to check if prime
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_helper(int n, int c)
{
	if (n % c == 0 && n != c)
	{
		return (0);
	}
	if (n == c)
	{
		return (1);
	}
	return (is_prime_helper(n, c + 1));
}

/**
 * is_prime_number - checks for prime
 * @n: number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 0 || n == 0 || n == 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
