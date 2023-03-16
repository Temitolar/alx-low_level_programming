#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Retuen: 1 on success
 * on error -1 is retuened, and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
