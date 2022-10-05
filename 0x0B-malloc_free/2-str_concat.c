#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory or null
 **/

char *str_concat(char *s1, char *s2)
{
	char *str;
	int a, b, ufirst, dev;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ufirst = dev = 0;
	while (s1[ufirst] != '\0')
		ufirst++;
	while (s2[dev] != '\0')
		dev++;

	str = malloc((ufirst + dev + 1) * sizeof(*s1));
	if (str == NULL)
		return (NULL);

	a = 0;
	while (a < ufirst)
	{
		str[a] = s1[a];
		a++;
	}
	b = 0;
	while (b <= dev)
	{
		str[a] = s2[b];
		a++;
		b++;
	}
	return (str);
}
