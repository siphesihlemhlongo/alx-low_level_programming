#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followedby new line
 * but for multiples of three prints instead of the numbers
 * and for multiples of five prints buzz
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 != 0)
		{
			printf("fizz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("buzz");
		} else if (i == 1)
		{
			printf("fizzbuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
