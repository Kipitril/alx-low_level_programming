#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @str: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *str)
{
	int length = 0;

	if (*str)
	{
		length = _strlen_recursion(str + 1);
		return (length = length + 1);
	}
	return (0);
}
