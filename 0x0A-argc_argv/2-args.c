#include <stdio.h>

/**
 * main - Prints all arguments recieved
 * @argc: Number of argument
 * @argv: Arrays of arguments
 *Return: Final result 0.
 */

int main(int argc, char *argv[])
{
	int count_for_argv;

	(void) argv;

	for (count_for_argv = 0; count_for_argv < argc; count_for_argv++)
	{
	printf("%s\n", argv[count_for_argv]);
	}

	return (0);
}
