#include "main.h"
/**
 * _strlen_recursion - Strig lenght recursion
 * @s: value
 * Return: void
 */
int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s)
	{
		x++;
		x += _strlen_recursion(s + 1);
	}
	return (x);
}
