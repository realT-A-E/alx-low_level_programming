#include "main.h"

/**
 * puts_half - print the last half of a string
 * @str: string to be processed
 * Description: if the string length is odd print the last (length - 1) / 2
 */
void puts_half(char *str)
{
	int a, b;

	for (a = 0; str[a] != '\0'; ++a)
		;
	for (b = (a + 1) / 2; b < a; ++b)
		_putchar(str[b]);
	_putchar('\n');
}
