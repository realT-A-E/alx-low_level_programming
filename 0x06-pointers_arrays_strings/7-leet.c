#include "main.h"

/**
 * leet - encode into 1337speak
 * @str: input value
 * Return: str value
 */

char *leet(char *str)
{
	int count = 0, a;
	int low_array[] = {97, 101, 111, 116, 108};
	int upper_array[] = {65, 69, 79, 84, 76};
	int num_array[] = {52, 51, 48, 55, 49};

	while (*(str + count) != '\0')
	{
		for (a = 0; a < 5; a++)
		{
			if (*(str + count) == low_array[a] || *(str + count) == upper_array[a])
			{
				*(str + count) = num_array[a];
				break;
			}
		}
		count++;
	}

	return (str);
}
