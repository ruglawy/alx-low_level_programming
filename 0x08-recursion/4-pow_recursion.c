#include "main.h"
/**
 * _pow_recursion - msh lazem a2ool
 * @x: number
 * @y: number
 *
 * Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x * y);
	}
	return (x * _pow_recursion(x, y - 1));

}
