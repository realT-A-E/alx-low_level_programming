#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - with a point return allocated space with copy of arg
 * @str: string
 * Return: pointer to array or null
 **/
char *_strdup(char *str)
{
	char *strDup;
	int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	a++;
	strDup = malloc(sizeof(*str) * a);
	if (strDup == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
	{
		strDup[b] = str[b];
		b++;
	}
	return (strDup);
}
