#include "main.h"
/**
 * factorial - factorial of a value
 * @n: value
 * Return: n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * facorial(n - 1));
}