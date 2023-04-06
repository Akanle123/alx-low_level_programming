#include "main.h"
/**
 * _puts_recursion - Recursion test1
 * @s: the value
 * Return: s
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar("\n");
	}
}
