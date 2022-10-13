#include "function_pointers.h"

/**
 * print_name- Entry
 * @name: name to printed
 * @f: function pointer
 * Description: Print name using function pointer
 * Return: Void
*/

void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
