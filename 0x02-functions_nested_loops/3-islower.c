#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: the character
 * Return: 1 if it is lowercase else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
