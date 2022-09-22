#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 * Return: no return
 */

void reverse_array(int *a, int n)
{
	int f;
	int temp;

	for (f = 0; f < n--; f++)
	{
		temp = a[f];
		a[f] = a[n];
		a[n] = temp;
	}
}
