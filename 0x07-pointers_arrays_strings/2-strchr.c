#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: string to be searched
 * @c: character to find
 *
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int index;

	index = 0;

	while (s[index] != '\0')
	{
		if (s[index] == c)
		{
			return (s + index);
		}
		index++;

	}
	if (s[index] == c)
	{
		return (s + index);
	}
	return (0);
}
