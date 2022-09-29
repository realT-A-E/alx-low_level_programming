#include "main.h"

/**
 * factorial - computer the factorial of a number
 *
 * @num: input number
 *
 * Return: factorial if number
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);
	else if (num == 0 || num == 1)
		return (1);
	else
		return (num * factorial(num - 1));
}
