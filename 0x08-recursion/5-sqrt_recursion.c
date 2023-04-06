#include "main.h"
/**
 * _sqrt_recursion - Square root recursion
 * @n: value
 * Return: void
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - checks for the square root
 * @x:int
 * @n:int
 *
 * Return: int
 */
int actual_sqrt_recursion(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == 0)
		return (x);
	return (actual_sqrt_recursion(n, x + 1));
}
