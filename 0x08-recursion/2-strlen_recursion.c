#include "main.h"

/**
 *_strlen_recursion - This function will return the lenght of a string "s"
 *recursively.
 *@s: The string which lenght will be returned.
 *Return: This function returns an interger which is the value for
 *the string "s".
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /*If the string is empty */
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
