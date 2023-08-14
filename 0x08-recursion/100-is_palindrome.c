#include "main.h"
/**
 * _strlen- This function Prints the length of a string.
 * @s: the string which lenght will be printed.
 * Return: returns an interger value which is the value for
 * the length of string "s"
 */
int _strlen(char *s)
{
	if (s[0] != '\0')
	{
	return (1 + _strlen(s + 1));
	}
	else
	return (0);
}
/**
 * pali_checker - This function will check if a given
 * string "s" is palindrome.
 * @s: The string that is to be checked.
 * @i: left index of the string.
 * @j: right index of the string.
 * Return: 1 if s is palindrome, otherwise 0.
 */
int pali_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pali_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - This function will be assisted be the above functions to
 * determine if s is palindrome
 * @s: A string.
 *
 * Return: 1 if the string is palindrome else 0.
 */
int is_palindrome(char *s)
{
	return (pali_checker(s, 0, _strlen(s) - 1));
}
