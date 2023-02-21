#include "main.h"

/**
 * _abs - compute the absolute value of an intiger
 * @c: the number to be computed
 * Return: Absolutr value number or 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
