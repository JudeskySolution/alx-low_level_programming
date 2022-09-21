#include "main.h"

/**
 * _strcat - concatenates the string pointed to by
 * @src to
 * the end of that string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char *p;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	p = dest;
	return (p);
}
