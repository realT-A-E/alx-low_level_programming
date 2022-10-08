#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 **/

int *array_range(int min, int max)
{
	int *dev;
	int u;

	if (min > max)
		return (NULL);

	dev = malloc(sizeof(*dev) * ((max - min) + 1));

	if (dev == NULL)
		return (NULL);

	for (u = 0; min <= max; u++, min++)
		dev[u] = min;

	return (dev);
}
