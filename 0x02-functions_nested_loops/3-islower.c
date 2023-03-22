#include "main.h"
/**
 * _islower - a function that checks for lowercase character.
 * @c: character to be checked
 * Return: Return 1 if character is lower case otherwise 0
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
