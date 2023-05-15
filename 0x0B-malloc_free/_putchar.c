#include "main.h"
#include <unistd.h>

/**
 * _putchar - write a character c to stdout
 * @c: character to print
 * Return: 1
 * on error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
