#include "main.h"

/**
 * string_toupper - a function that reverses the content of
 * an array of integers
 *
 * @c: character string pointer
 * Return: char pointer
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[i] > 96 && c[i] < 123)
			c[i] -= 32;
		i++;
	}
	return (c);
}
