#include "main.h"
/**
 * _sqrt_helper - calculates square root using recursion
 * @n: number
 * @min: min
 * @max: max
 *
 * Return: result
 */
int _sqrt_helper(int n, int min, int max)
{
	if ((max * max) < n)
	{
		return (max);
	}
	else if ((min * min) > n)
	{
		return (min - 1);
	}
	else
	{
		int guess = (min + max) / 2;

		if ((guess * guess) < n)
		{
			return (_sqrt_helper(n, guess + 1, max));
		}
		else if ((guess * guess) > n)
		{
		return (_sqrt_helper(n, min, guess-1));
		}
		else
		{
			return (guess);
		}
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1, n / 2));
	}
}
