#include "main.h"

/**
 * get_bit - function that returns the value of a bit at an index
 * @n: the number to search
 * @index: the index of the bit
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_variable;

if (index > 63)
return (-1);

bit_variable = (n >> index) & 1;

return (bit_variable);
}
