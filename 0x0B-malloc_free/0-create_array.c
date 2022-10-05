#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *dev;
	unsigned int i;

	if (size == 0)
		return (NULL);

	dev = malloc(sizeof(c) * size);

	if (dev == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		dev[i] = c;

	return (dev);
}
