#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the diagonal sum of a square matrix of integers
 *
 * @a: pointer to a multidimensional area
 * @size: dimension of the matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int suma, sumb, i, j, k;

	j = 0, k = size - 1;
	suma = sumb = 0;
	for (i = 0; i < size; ++i, j += size + 1, k += size - 1)
	{
		suma += *(a + j);
		sumb += *(a + k);
	}
	printf("%d, %d\n", suma, sumb);
}
