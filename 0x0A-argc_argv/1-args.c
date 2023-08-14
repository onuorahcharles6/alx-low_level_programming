#include <stdio.h>

/**
 * main - The main function.
 * @argc: The arguement counter.
 * @argv: The arguement vector.
 * Return: This function returns an interger which is the number
 * of arguement passed to it
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);


	return (0);
}
