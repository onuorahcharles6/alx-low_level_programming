#include <stdio.h>
#include <stdlib.h>

/**
 * main - Shows the beginning of all functions
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: this function returns 0 on success otherwise it returns 1.
 */

int main(int argc, char *argv[])
{

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{

	int a = atoi(argv[1]);

	int b = atoi(argv[2]);

	int result = a * b;

	printf("%d\n", result);
	}

	return (0);
}
