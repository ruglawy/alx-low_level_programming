#include "main.h"
/**
 * factorial - returns factorial of n
 * @n: number
 *
 * Return: factorial of number
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (factorial(n-1) * factorial(n-2));
}
