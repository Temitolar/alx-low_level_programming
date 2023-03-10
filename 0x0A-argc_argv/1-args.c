#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: count argument
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /* ignore argv */
	printf("%d\n", argc - 1);

	return (0);
}
