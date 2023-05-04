#include "main.h"
/**
 * leet - encode int 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, j;
	char sl[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; j++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == sl[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (0);
}
