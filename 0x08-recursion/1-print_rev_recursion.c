#include "main.h"
/**
 * _print_rev_recursion - print a string in reverse
 * @s: sreing to be printeg
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
