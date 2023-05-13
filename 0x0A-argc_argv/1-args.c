#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments that passed onto the program
 *@argc: prints number of arguments
 *@argv: prints the array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
