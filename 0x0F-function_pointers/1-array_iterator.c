#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that prints name
 * @array: array
 * @size: size
 * @action: action
 *
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
