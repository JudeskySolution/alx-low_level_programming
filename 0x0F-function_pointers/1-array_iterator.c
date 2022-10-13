#include "function_pointers.h"

/**
 * array_iterator- Entry
 * @array: array to be iterated
 * @size: size of array
 * @action: funtion pointer
 * Description: Executes a fucntion as a parameter on each element of an array
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!action || !array)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
