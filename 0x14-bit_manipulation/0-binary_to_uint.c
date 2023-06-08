#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: the string that contains the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int declare_val = 0;

if (!b)
return (0);

for (a = 0; b[a]; a++)
{
if (b[a] < '0' || b[a] > '1')
return (0);
declare_val = 2 * declare_val + (b[a] - '0');
}
return (declare_val);
}
