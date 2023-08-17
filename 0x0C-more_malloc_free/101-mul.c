#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _printer - string and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */
void _printer(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}

/**
 * muller - multiplies a char with a string and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 *
 * Return: pointer to dest, or NULL on failure
 */
char *muller(char n, char *num, int num_index, char *dest, int dest_index)
{
	int j, k, muller, mula, add, dada;

	mula = dada = 0;
	for (j = num_index, k = dest_index; j >= 0; j--, k--)
	{
		muller = (n - '0') * (num[j] - '0') + mula;
		mula = muller / 10;
		add = (dest[k] - '0') + (muller % 10) + dada;
		dada = add / 10;
		dest[k] = add % 10 + '0';
	}
	for (dada += mula; k >= 0 && dada; k--)
	{
		add = (dest[k] - '0') + dada;
		dada = add / 10;
		dest[k] = add % 10 + '0';
	}
	if (dada)
	{
		return (NULL);
	}
	return (dest);
}
/**
 * searching - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 0 if digits, 1 if not
 */
int searching(char **av)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - initializes a string
 * @str: sting to initialize
 * @l: length of strinf
 *
 * Return: void
 */
void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if failure
 */
int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || searching(argv))
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			_putchar(e[ti]);
		exit(98);
	}
	init(a, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = muller(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				_putchar(e[ti]);
			free(a);
			exit(98);
		}
	}
	_printer(a, ln - 1);
	return (0);
}
