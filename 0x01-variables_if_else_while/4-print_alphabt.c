#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print alphabet without q and e
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
