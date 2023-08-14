#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - This is the beginning of this program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Returns to 0 on success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	const char *arg;
	const char *c;
	int num;
	(void) argv;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
	arg = argv[i];
	for (c = arg; *c != '\0'; c++)
	{
	if (!isdigit(*c))
	{
	printf("Error\n");
	return (1);
	}
	}

	num = atoi(arg);

	if (num < 0)
	{
	printf("Error\n");
	return (1);
	}

	sum = sum + num;

	}
	printf("%d\n", sum);
	return (0);
}
