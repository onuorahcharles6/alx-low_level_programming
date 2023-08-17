#include <stdlib.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - run and return string L
 * @string: string
 * Return: string L
 */
int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - Join s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes 2 join 4rm string 2
 * Return: pointer t joined string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num = n;

	if (s1 == NULL) /* show NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0) /* show negative n bytes */
		return (NULL);
	if (num >= _strlen(s2)) /* show n too big */
		num = _strlen(s2);

	len = _strlen(s1) + num + 1; /* +1 to show null pointer */

	ptr = malloc(sizeof(*ptr) * len); /* malloc and show error */
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* join */
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
