#include "main.h"

/**
 * _strlen_recursion - measures string
 * @s: string to measure
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s != '\0')
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
	return (len);
}
