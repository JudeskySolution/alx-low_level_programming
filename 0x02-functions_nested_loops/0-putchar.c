#include "main.h"

/**
 * main - prints the word _putchar
 *
 * Return: 0 on success execution.
 */

int main(void)
{
	char a[] = "_putchar";
	int b;

	for (b = 0; b < 8; b++)
	{
		_putchar(a[b]);
	}
		_putchar('\n');
		return (0);
}
