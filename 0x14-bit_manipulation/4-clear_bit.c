#include "main.h"

/**
 * clear_bit - function that sets the value of a bit 0 at a given index
 * @n: the pointer to the number to change
 * @index: the index of the bit to clear
 * Return: 1 , -1 if its failing
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
