#include "main.h"

/**
 * strg_checker - check if two strings are identical.
 * @x: string_1 base.
 * @y: string_2 base.
 * @a: left index lefty
 * @b: special index for real
 * Return: 1 if s is palindrome or zero if not
 */
int strg_checker(char *x, char *y, int a, int b)
{
	if (x[a] == '\0' && y[b] == '\0')
		return (1);
	if (x[a] == y[b])
		return (strg_checker(x, y, a + 1, b + 1));
	if (x[a] == '\0' && y[b] == '*')
		return (strg_checker(x, y, a, b + 1));
	if (y[b] == '*')
		return (strg_checker(x, y, a + 1, b) || strg_checker(x, y, a, b + 1));
	return (0);
}
/**
 * wildcmp - check if strings is identical
 * @x: base address for strg.
 * @y: base address for strg.
 *
 * Return: 1 if are considered identical.
 */
int wildcmp(char *x, char *y)
{
	return (strg_checker(x, y, 0, 0));
}
