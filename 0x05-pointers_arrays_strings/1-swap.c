#include "main.h"
/**
 * swap_int - swapping the alue of two int
 * @a: int a
 * @b: int b
 * Return: 0
 *
 */

void swap_int(int *a, int *b)
{
	int u;

	u = *a;
	*a = *b;
	*b = u;
}
