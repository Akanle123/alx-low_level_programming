#include "main.h"
/**
 * _strlen - string lenght
 * @s: character
 * Return: void
 */
int _strlen(char *s)
{
	int y = 0;

	for (; *s++)
		y++;
	return (y);
}
