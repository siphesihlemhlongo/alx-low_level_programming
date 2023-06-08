#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if it is big, 1 if it is small
 */
int get_endianness(void)
{
unsigned int s = 1;
char *c = (char *) &s;

return (*c);
}
