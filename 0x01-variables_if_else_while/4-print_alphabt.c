#include<stdio.h>

/**
*main-Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c !='q' && c !='e')
			purchar(c);
		c++;
	}
	purchar('\n');

	return (0);
}

