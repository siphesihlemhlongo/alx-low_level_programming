#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(8s);
		_puts_recursions(s + 1);
	}
	else
		_putchar('\n');
}
