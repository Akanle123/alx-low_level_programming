#include "main.h"
/**
 * _sqrt_recursion - Square root recursion
 * @n: value
 * Return: void
 *
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (actual_sqrt_recursion(1, n));
}
/**
 * actual_sqrt_recursion - checks for the square root
 * @x:int
 * @y:int
 *
 * Return: int
 */
int actual_sqrt_recursion(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (check(x + 1, y));
}
}
