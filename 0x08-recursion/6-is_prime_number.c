#include "main.h"
/**
 * is_prime_number - prime number
 * @n: value
 * Return: void
 *
 */
int is_prime_number(int n);
{
	if (n == 2)
		return (1);
	return (actual_prime(2, n));
}
/**
 * actual_prime - checksprime number
 * @x:int
 * @y:int
 *
 * Return: int
 */
int actual_prime(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check(x + 1, y));
}
