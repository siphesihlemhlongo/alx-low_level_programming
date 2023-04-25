#include <unistd.h>

/**
 * main - Prints _putchar program
 * @c: a character to print
 * Return: 1
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
