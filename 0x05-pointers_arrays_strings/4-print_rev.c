#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int udev = 0;

	while (udev >= 0)
	{
		if (s[udev] == '\0')
			break;
		udev++;
	}

	for (udev--; udev >= 0; udev--)
		_putchar(s[udev]);
	_putchar('\n');
}
