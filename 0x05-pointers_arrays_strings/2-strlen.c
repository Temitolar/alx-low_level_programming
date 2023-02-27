#include <stdio.h>

/**
 * _strlen - returns tge length os a strjng
 * @a: the string to get tge length of
 * return: the length of @str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length ++;
	return (length);
}
