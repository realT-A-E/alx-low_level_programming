#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int a;
	char *test;

	a = 1;
	test = (char *)&a;
	return ((int)test[0]);
}
