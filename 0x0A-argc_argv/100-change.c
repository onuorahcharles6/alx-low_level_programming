#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: An argument count
 * @argv: An argument vector
 *Return: Always 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{	int cents;
	int coins;

	if (argc == 1)
	{
	printf("Error\n");
	return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
	printf("0\n");
	return (1);
	}
	coins = get_change(cents);
	printf("%d\n", coins);
	return (0);
}

/**
 * change - prints the minimum number of coins
 * to make change for an amount of money.
 * @cents: The amount of money we work with
 *Return: Returns all interger which is the value for the minimum number of
 *coins to make change for a given amount of naira
 */

	int change(int cents)
{
	int coins = 0;

	for (; cents >= 25;)
	{
	cents = cents - 25;
	coins++;
	}
	for (; cents >= 10;)
	{
	cents = cents - 10;
	coins++;
	}
	for (; cents >= 5;)
	{
	cents = cents - 5;
	coins++;
	}
	for (; cents >= 2;)
	{
	cents = cents - 2;
	coins++;
	}
	for (; cents >= 1;)
	{
	cents = cents - 1;
	coins++;
	}
	return (coins);
}
