#include <stdio.h>
#include "main.h"
/**
 * _putchar - write a character c to stdout
 * @c: is the character to print
 * Return: 1
 * on error, -1 will be returned and the error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}		
